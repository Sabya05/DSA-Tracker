class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {

        int a = 0, b = 0;

        for (int val : aliceSizes)
            a += val;

        for (int val : bobSizes)
            b += val;

        int diff = (b - a) / 2;

        unordered_set<int> s;

        for (int val : bobSizes)
            s.insert(val);

        for (int val : aliceSizes) {
            if (s.count(val + diff)) {
                return {val, val + diff};
            }
        }

        return {};
    }
};