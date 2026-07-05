class MinStack {
public:
    stack<long long> st;
long long minval;

    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            minval=value;
        }
        
        else {
           if(value<minval){
           st.push((2LL *value)-minval);
           minval=value;
           }else{
            st.push(value);
           }
           
        }
    }
    
    void pop() {
        if(st.top() < minval){
                 minval=(2*minval)-st.top();
            }        
        st.pop();

    }
    
    int top() {
       if(st.top() < minval)
            return minval;

        return st.top();
    }
    
    int getMin() {
      return minval;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */




 /*
 New Method

stack<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push({value,value});
        }
        
        else {
            int minval=min(value,st.top().second);
            st.push({value,minval});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
      return st.top().first;
    }
    
    int getMin() {
      return st.top().second;
    }


 */