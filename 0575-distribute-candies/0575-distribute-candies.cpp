class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
          m[candyType[i]]++;
        }
        return min((int)m.size(),(int)n/2);
    }
};