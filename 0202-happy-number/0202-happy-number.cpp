class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>m;
        while(n!=1){
            int sum=0;
            int num=n;
            if(m.count(n))
              return false;

        m.insert(n);
            while(num!=0){
                int d=num%10;
                num=num/10;
                sum+=(d*d);

            }
            n=sum;
        }
        return (n==1);
    }
};