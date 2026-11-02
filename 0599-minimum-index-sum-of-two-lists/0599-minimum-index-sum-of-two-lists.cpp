class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>m;
        
        for(int i=0;i<list1.size();i++){
            m[list1[i]]=i;
        }
         int mini = INT_MAX;
        vector<string>result;
        for(int i=0;i<list2.size();i++){
            if(m.find(list2[i])!=m.end()){
                int sum = i + m[list2[i]];

                if(sum < mini) {
                    mini = sum;
                    result.clear();
                    result.push_back(list2[i]);
                }
                else if(sum == mini) {
                    result.push_back(list2[i]);
                }
            }
        }
       
        
        return result;
    }
};