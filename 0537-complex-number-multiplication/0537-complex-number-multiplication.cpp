class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
      int pos1 = num1.find('+', 1);
if(pos1 == string::npos)
    pos1 = num1.find('-', 1);

int a = stoi(num1.substr(0, pos1));
int b = stoi(num1.substr(pos1 + 1));

     int pos2 = num2.find('+', 1);
if(pos2 == string::npos)
    pos2 = num2.find('-', 1);

int c = stoi(num2.substr(0, pos2));
int d = stoi(num2.substr(pos2 + 1));

 int val = a*c - b*d;
int imaginary = a*d + b*c;



 string ans = to_string(val);
ans += "+" + to_string(imaginary) + "i";

return ans;


    }
};