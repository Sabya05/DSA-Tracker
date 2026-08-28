class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int count=0;
             int s=i;
            for(int j=0;j<32;j++){
                int d=s%2;
                if(d==1)count++;
                s=s/2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};