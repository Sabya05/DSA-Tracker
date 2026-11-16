class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for( char c:s){
            m[c]++;
        }
        string str="";
      while(!m.empty()){
        int maxi=0;
        char ch;
        for(auto it:m){
            if(it.second>maxi){
               maxi=it.second;
               ch=it.first;
            }
        } 
        str+=string(maxi,ch);
               m.erase(ch);
      }

        return str;
    }
};


// most optimal approach
// class Solution {
// public:
//     string frequencySort(string s) {
//         unordered_map<char,int> m;

//         for(char c : s) {
//             m[c]++;
//         }

//         vector<vector<char>> bucket(s.size() + 1);

//         for(auto it : m) {
//             bucket[it.second].push_back(it.first);
//         }

//         string ans = "";

//         for(int i = s.size(); i >= 1; i--) {
//             for(char c : bucket[i]) {
//                 ans += string(i, c);
//             }
//         }

//         return ans;
//     }
// };