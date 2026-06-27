class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        for(auto it:m){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};