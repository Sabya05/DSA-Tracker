class Solution {
public:
    int reverseBits(int n) {
     
        int ans=0;
        for(int i=0;i<32;i++){
            int d=n%2;
            ans=ans*2+d;
            n=n/2;
            
        }
       
        return ans;
    }
};