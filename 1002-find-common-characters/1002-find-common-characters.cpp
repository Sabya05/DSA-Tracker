class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        unordered_map<char,int> m;
        vector<string> ans;

        int n = words.size();

        for(char c : words[0]) {
            m[c]++;
        }

        for(int i = 1; i < n; i++) {

            unordered_map<char,int> temp;

            for(char c : words[i]) {
                temp[c]++;
            }

            for(auto &it : m) {

                if(temp.find(it.first) != temp.end()) {
                    it.second = min(it.second, temp[it.first]);
                }
                else {
                    it.second = 0;
                }
            }
        }

        for(auto it : m) {

            for(int i = 0; i < it.second; i++) {
                ans.push_back(string(1, it.first));
            }
        }

        return ans;
    }
};