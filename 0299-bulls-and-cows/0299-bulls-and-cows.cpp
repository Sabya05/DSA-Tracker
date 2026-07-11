class Solution {
public:
    string getHint(string secret, string guess) {
       
        int b=0;
        int c=0;
        int n=secret.size();
        unordered_map<char,int>m1;
      
       
        
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                b++;
            }else{
                m1[secret[i]]++;
            }
                
                
        }
        for(int i=0;i<n;i++){
         if(secret[i] != guess[i] && m1[guess[i]] > 0){
                 c++;
                 m1[guess[i]]--;
            }
        }
        
    
        return to_string(b)+"A"+to_string(c)+"B";
    }
};