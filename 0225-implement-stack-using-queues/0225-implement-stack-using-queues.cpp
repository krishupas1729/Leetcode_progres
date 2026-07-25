class MyStack {
public:
    MyStack() {
        queue<int> q;
        int s=q.size();
    }
    queue<int> q;
    int s=q.size();

    void push(int x) {
        int s=q.size();
        q.push(x);
        for(int i =0 ;i<s;i++ ) {
            q.push(q.front());
            q.pop();
        }
        s++;
    }
    
    int pop() {
        int k = q.front();
        q.pop();
        s--;
        return k;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */