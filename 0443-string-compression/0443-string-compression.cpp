class Solution {
public:
    int compress(vector<char>& chars) {
     int i=1;
     int a=chars[0];
     string str="";
     int count=1;
     while(i<chars.size()){
        
        if(chars[i]==a){
            count++;
        }else{
            str+=a;
            if(count>1 ){
              str+=to_string(count);
            }
            count=1;
            a=chars[i];
        }

     i++;
     }
     str+=a;
     if(count>1 ){
       str+=to_string(count);
       }

     for(int j=0;j<str.size();j++){
        chars[j]=str[j];
     }
       return str.size();
    }
};