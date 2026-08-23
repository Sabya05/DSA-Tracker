class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int n=words.size();
        vector<string>ans;
        for(int i=0;i<n;i++){
            int l=words[i].size();
            int count1=0,count2=0,count3=0;
            for(int j=0;j<l;j++){
                char c=words[i][j];
                if(c=='q'||c=='Q'||c=='w'||c=='W'||c=='e'||c=='E'||c=='r'||c=='R'||c=='t'||c=='T'||c=='y'||c=='Y'||c=='u'||c=='U'||c=='i'||c=='I'||c=='o'||c=='O'||c=='p'||c=='P'){
                    count1++;
                }
                if(c=='a'||c=='A'||c=='s'||c=='S'||c=='d'||c=='D'||c=='f'||c=='F'||c=='g'||c=='G'||c=='h'||c=='H'||c=='j'||c=='J'||c=='k'||c=='K'||c=='l'||c=='L'){
                    count2++;
                }
                if(c=='z'||c=='Z'||c=='x'||c=='X'||c=='c'||c=='C'||c=='v'||c=='V'||c=='b'||c=='B'||c=='n'||c=='N'||c=='m'||c=='M'){
                    count3++;
                }

            }

            if(count1!=0 && count2==0 && count3==0){
                ans.push_back(words[i]);
            }else if(count2!=0 && count1==0 && count3==0){
                ans.push_back(words[i]);
            }else if(count3!=0 && count1==0 && count2==0){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};