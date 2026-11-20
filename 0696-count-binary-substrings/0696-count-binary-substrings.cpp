
class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;){
            int count=0;
            int j=i;
            
            while(j<n && s[i]==s[j]){
              count++;
              j++;
              
            }
           int next=j;
           
           while(next<n && s[i]!=s[next] && count > 0){
                count--;
                ans++;
              next++;
            }
            i=j;

        }
        return ans;
    }
};