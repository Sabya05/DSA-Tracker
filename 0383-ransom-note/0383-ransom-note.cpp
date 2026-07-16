class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int>m1;
        for(char c: ransomNote){
             m1[c]++;
        }
      
        for( char c:magazine){
            if(m1.find(c)!=m1.end()){
                  m1[c]--;
            }
            if(m1[c]==0) m1.erase(c);
        }
        return m1.empty();
    }
};