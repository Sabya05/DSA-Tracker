class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int end=letters.size();
        int st=0;
        while(st<end){
            int mid=st+((end-st)/2);
            if(letters[mid]>target){
                end=mid;
            }
            else{
                st=mid+1;
            }
        }
         if (st == letters.size())
            return letters[0];

        return letters[st];
    }
};