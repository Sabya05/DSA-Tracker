class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        int n=abs(num);
        string ans;
      
        while(n>0){
            int d=n%7;
           ans.push_back(d + '0');
          
            n=n/7;
        }
        if(num<0) ans.push_back('-');
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};