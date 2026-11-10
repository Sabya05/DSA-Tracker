class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            int count =0;
            int k=i;
            while(k>0){
               int num=k%2;
               k=k/2;

               if(num==1){
                count++;
               }
            }

            bool prime = true;

            if(count < 2) {
                prime = false;
            }
            for(int j=2;j*j<=count;j++){
                if(count%j==0){
                  prime = false;
                    break;
                }
            }
            if(prime){
               ans++; 
            }
            
        }
        return ans;
    }
};