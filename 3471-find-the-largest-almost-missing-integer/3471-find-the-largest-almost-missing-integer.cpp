class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int,int> m;

        // k = 1
        if(k == 1) {
            for(int x : nums)
                m[x]++;

            int ans = -1;

            for(auto it : m) {
                if(it.second == 1)
                    ans = max(ans, it.first);
            }

            return ans;
        }

        // k = n
        if(k == n) {
            return *max_element(nums.begin(), nums.end());
        }

        // 1 < k < n
        for(int x : nums)
            m[x]++;

        int ans = -1;

        if(m[nums[0]] == 1)
            ans = max(ans, nums[0]);

        if(m[nums[n-1]] == 1)
            ans = max(ans, nums[n-1]);

        return ans;
    }
};

/* class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int i=0;
        int n=nums.size();
        if(nums.size()<k)return -1;
        while(i+k<=n){
            int j=0;
            unordered_set<int>s;
            while(j<k){
                s.insert(nums[i+j]);
                j++;
            }
            for(auto x:s){
                m[x]++;
            }
            i++;
        }
        int ans=-1;
        for(auto it :m){
            if(it.second==1){
                return it.first;
            }
        }
      
        return ans;

    }
};

    */