class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
      vector<int> ans(num_people, 0);
        int i=0;
        int count=0;
        while(candies>0){
            if(i==num_people){
            i=0;
           }
           

            int give = min(candies, count + 1);
            ans[i] += give;
            candies -= give;
           
           
           i++;
           count++;
           
        }
        return ans;
    }
};