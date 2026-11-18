class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        bool s=false;
         if(word[0]==toupper(word[0])){
            s=true;
         }
        
            if(s){
                if(n > 1 && word[1]==toupper(word[1])){
                    for(int i=2;i<n;i++){
                        if(word[i]!=toupper(word[i])){
                           return false;
                        }
                    }
                }else{
                     for(int i=1;i<n;i++){
                        if(word[i]!=tolower(word[i])){
                           return false;
                        }
                     }
                }
               
            }else{
               for(int i=1;i<n;i++){
                  if(word[i]!=tolower(word[i])){
                    return false;
                  }
               }
            }

           return true;
        
    }
};



// optimal
// class Solution {
// public:
//     bool detectCapitalUse(string word) {
//         int cnt = 0;

//         for(char c : word) {
//             if(isupper(c)) cnt++;
//         }

//         return cnt == 0 || cnt == word.size() ||
//                (cnt == 1 && isupper(word[0]));
//     }
// };