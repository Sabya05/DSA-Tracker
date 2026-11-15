class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> m;

        for(char c : s){
            m[c]++;
        }

        string str = "";

        for(char c : order){
            if(m.find(c) != m.end()){
                str += string(m[c], c);
                m.erase(c);
            }
        }

        for(auto it : m){
            str += string(it.second, it.first);
        }

        return str;
    }
};