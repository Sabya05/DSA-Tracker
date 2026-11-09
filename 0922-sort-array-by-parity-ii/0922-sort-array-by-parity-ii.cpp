class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       
        int n=nums.size();
       int j=0,k=1;
       vector<int>answer(n);
       for(int i=0;i<n;i++){
         if(nums[i]%2==0){
             answer[j]=nums[i];
            j+=2;
         }
         else{
            answer[k]=nums[i];
            k+=2;
         }
       }
       return answer;
    }
};