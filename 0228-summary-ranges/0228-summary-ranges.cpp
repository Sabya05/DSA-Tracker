class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
         vector<string> ans;
         if(nums.empty())
            return ans;

        int n=nums.size();
        int st=nums[0];
       
        for(int i=0;i<n;i++){
            
            if(i==n-1 || (nums[i]+1)!=nums[i+1]){

                if(st==nums[i]){
                    ans.push_back(to_string(nums[i]));
                }
                else{
                    ans.push_back(to_string(st)+"->"+to_string(nums[i]));
                }
                if(i!=n-1){
                    st=nums[i+1];
                }
            }
            
        }
        return ans;
    }
};