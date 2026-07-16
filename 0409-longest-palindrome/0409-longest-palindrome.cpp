class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int>m;
     int count=0;
     bool present=false;
     bool odd=false;
       for(char c : s){
           m[c]++;
       }
       for(auto it:m){
        if(it.second%2==0){
            count+=it.second;
        }else if( it.second>2){
            count+=(it.second-1);
            odd=true;
        }else{
           present=true;
        }
       }
       if(present){
        count+=1;
       }else if(odd){
        count+=1;
       }
       return count;
    }
};