/*Not optimal

class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(), nums.end(), greater<int>());
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count++;
          while(i<n-1 && nums[i]==nums[i+1]){
            i++;
          }
           if(count==3) return nums[i];
        }
        return nums[0];
    }
};*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long firstmax=LONG_MIN;
        long secondmax=LONG_MIN;
        long thirdmax=LONG_MIN;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
           if(nums[i] == firstmax || nums[i] == secondmax || nums[i] == thirdmax)
                continue;

            if(nums[i]>firstmax){
                thirdmax=secondmax;
                secondmax=firstmax;
                firstmax=nums[i];
            }else if(nums[i]>secondmax){
                thirdmax=secondmax;
                secondmax=nums[i];
            }else if(nums[i]>thirdmax){
                thirdmax=nums[i];
            }
        }
     return (thirdmax==LONG_MIN)?firstmax:thirdmax;
    }
};