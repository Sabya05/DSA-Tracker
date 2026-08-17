class Solution {
public:
 double myPow(double x, int n) {
    long long N=n;
if(N<0){
    x=1/x;
    N=-N;
}
double ans=1;
while(N>0){
    if(N%2==1)
      ans*=x;

    x*=x;
    N=N/2;
}
return ans;
 }  
};

/*double myPow(double x, int n) {

        if(n==0)return 1;


       if(n<0){
        return 1/myPow(x,-n);
       }
     return x*myPow(x,n-1);
      
    }*/
