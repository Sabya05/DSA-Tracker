class Solution {
public:
    int firstUniqChar(string s) {
    unordered_map<char, int> m;
        queue<int>q;
        int n=s.size();
        for(char x:s){
            m[x]++;
        }
        for(int i=0;i<n;i++){
               if(m[s[i]]==1){
                return i;
               }
        }
        return -1;
    }
};