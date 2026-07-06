class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int area=0;
        int maxarea=area;
        stack<int>st1;
        stack<int>st2;
        vector<int>right(n);
        vector<int>left(n);
        for(int i=n-1;i>=0;i--){
               while(!st1.empty() && heights[st1.top()] >= heights[i]){
                 st1.pop();
              }
              if(st1.empty())
    right[i] = n;
               else
                  right[i] = st1.top();
            st1.push(i);
        } 

        
        for(int i=0;i<n;i++){
               while(!st2.empty() && heights[st2.top()] >= heights[i]){
                st2.pop();
              }
              if(st2.empty())
                  left[i] = -1;
              else
                  left[i] = st2.top();
            st2.push(i);
        } 


          for(int i=0;i<n;i++){
             area=heights[i]*((right[i]-left[i])-1);
             maxarea=max(area,maxarea);
        }
        return maxarea;

    }
};