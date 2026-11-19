
class Solution {
public:
    bool reorderedPowerOf2(int n) {

        unordered_map<int,int> m;

        while(n > 0) {
            int d = n % 10;
            m[d]++;
            n /= 10;
        }

        for(int i = 0; i < 31; i++) {

            int num = 1 << i;
            unordered_map<int,int> temp;

            while(num > 0) {
                int d = num % 10;
                temp[d]++;
                num /= 10;
            }

            if(m == temp) {
                return true;
            }
        }

        return false;
    }
};
