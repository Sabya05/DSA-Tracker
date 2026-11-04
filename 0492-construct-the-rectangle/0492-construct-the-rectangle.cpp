class Solution {
public:
    vector<int> constructRectangle(int area) {
    int n=area;
    int val1=1,val2=area;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            val1=i;
            val2=n/i;
        }
    }
   return {max(val1,val2),min(val1,val2)};
    
    }
};