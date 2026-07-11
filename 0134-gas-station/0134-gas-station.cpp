class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int sumgas=0,sumcost=0;
        for(int i=0;i<n;i++){
            sumgas+=gas[i];
        }
        for(int i=0;i<n;i++){
            sumcost+=cost[i];
        }
        if(sumcost>sumgas) return -1;
          
          int st=0;
          int currgas=0;
          for(int i=0;i<n;i++){
            currgas+=(gas[i]-cost[i]);
            if(currgas<0){
                st=i+1;
                currgas=0;
            }
          }
          return st;

    }
};