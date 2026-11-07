class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_set<int>m;
        int i=0,j=n-1;
        while(i<j){
            
            m.insert(nums[i]+nums[j]);
            i++;
            j--;
        }
        return m.size();
    }
};