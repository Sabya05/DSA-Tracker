class Solution {
public:
    bool sorted(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1])
                return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int ans = 0;

        while (!sorted(nums)) {
            int idx = 0;
            int mn = nums[0] + nums[1];

            for (int i = 1; i < nums.size() - 1; i++) {
                if (nums[i] + nums[i + 1] < mn) {
                    mn = nums[i] + nums[i + 1];
                    idx = i;
                }
            }

            nums[idx] += nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);
            ans++;
        }

        return ans;
    }
};