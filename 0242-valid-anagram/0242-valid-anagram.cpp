class Solution {
public:
    bool isAnagram(string s, string t) {

         if(s.size() != t.size())
            return false;


        unordered_map<char,int>m1;
 
        for(char x : s){
             m1[x]++;
        }
        
        int n=s.size();

        for(int i=0;i<n;i++){
            if(m1.find(t[i])==m1.end() || m1[t[i]] == 0){
               return false;
            }else{
                m1[t[i]]--;
            }
        }
        return true;
    }
};