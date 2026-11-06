class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
            unordered_map<int,int>m;
           
            int n=score.size();
            for(int i=0;i<n;i++){
                m[score[i]]=i;
            }
            sort(score.rbegin(),score.rend());
            vector<string>answer(n);
            for(int i=0;i<n;i++){
                  int originalIndex = m[score[i]];

            if(i == 0){
                answer[originalIndex] = "Gold Medal";
            }
            else if(i == 1){
            answer[originalIndex] = "Silver Medal";
            }
            else if(i == 2){
            answer[originalIndex] = "Bronze Medal";
            }
            else{
               answer[originalIndex] = to_string(i+1);
            }
            }

            return answer;
    }
};