class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>m;
        int sum=0;
        int sumshould=(n*(n+1))/2;
        for(int i=0;i<n;i++){
              m[nums[i]]++;
              sum+=nums[i];
               }
         for(auto it:m){
            if(it.second==2){
                ans.push_back(it.first);
                sum=sum-it.first;
                
            }
        }
                int x=sumshould-sum;
                ans.push_back(x);

    return ans;
    }
};