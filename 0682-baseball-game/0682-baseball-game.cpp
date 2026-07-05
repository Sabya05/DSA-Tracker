class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int>st;
        int sum=0;
        int top;
        for(int i=0;i<n;i++){
            if(operations[i]=="C"){
                sum=sum-st.top();
                st.pop();
            }
            else if(operations[i]=="D"){
               top=st.top()*2;
               st.push(top);
               sum=sum+top;
            }else if(operations[i]=="+"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.push(first);
                st.push(first+second);
                sum=sum+(first+second);
            }else{
                int x=stoi(operations[i]);
                st.push(x);
                sum+=x;
            }
            
        }
        return sum;
    }
};