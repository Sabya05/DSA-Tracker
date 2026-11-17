class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int>m1;
        unordered_map<string,int>m2;
        
        for(char &c : paragraph){
            if(isalpha(c)){
                c = tolower(c);
            }
            else{
                c = ' ';
            }
        }
         stringstream ss(paragraph);
        string word;
        while (ss >> word) {
            m1[word]++;
        }
        
        for(string s:banned){
            m2[s]++;
        }
       
       string ans="";
       int maxi=0;
         for(auto it : m1){

            if(m2.find(it.first) == m2.end()){

                if(it.second > maxi){
                    maxi = it.second;
                    ans = it.first;
                }
            }
        }
        return ans;
    }
};