class Solution {
public:

        
   void combination(vector<int>& path,int i, int n, int k,
                 vector<vector<int>>& ans) {

    if (k == 0) {
        ans.push_back(path);
        return;
    }

    for (int j = i; j <= n; j++) {

        path.push_back(j);

        combination(path, j + 1, n, k - 1, ans);

        path.pop_back();

    }
}
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans;
    vector<int> path;

    combination(path,1,n, k, ans);

    return ans;
    }
};