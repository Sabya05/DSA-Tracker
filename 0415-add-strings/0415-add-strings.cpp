class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
     string ans="";
        while(i>=0 && j>=0){
             int sum=carry;
             int digit1=num1[i]-'0';
             int digit2=num2[j]-'0';
             sum+=(digit1)+(digit2);
             
             
             int x=sum%10;
             ans.push_back(x + '0');
             carry=sum/10;

             i--;
             j--;
        }
        while(j>=0){
            int sum=carry;
            int digit2=num2[j]-'0';
            sum+=digit2;

            int x=sum%10;
             ans.push_back(x + '0');
            carry=sum/10;
            j--;
        }
        while(i>=0){
            int sum=carry;
            int digit1=num1[i]-'0';
            sum+=digit1;

            int x=sum%10;
            ans.push_back(x + '0');
            carry=sum/10;
            i--;
        }
        if(carry)
            ans.push_back(carry + '0');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};