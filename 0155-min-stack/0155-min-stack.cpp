class MinStack {
public:
    MinStack() {
        stack<long long> st;
        long long mini = INT_MAX;
    }
    stack<long long> st;
        long long mini = INT_MAX;
    void push(int val) {
        if(st.empty()) {
            st.push(val);
            mini = val;
        }
        else{
            if(val > mini ) st.push(val);
            else{
                st.push(2LL*val-mini);
                mini = val;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long k = st.top();
        st.pop();
        if(k<mini) mini = 2LL * mini - k;
        

    }
    
    int top() {
        if(st.empty()) return -1;
        long long k = st.top();
        if(mini<k) return (int)k ;
        else{
            return (int)mini;
        }
    }
    
    int getMin() {
        return 
        (int)mini;
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