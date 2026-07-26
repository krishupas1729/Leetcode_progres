class MyQueue {
public:
    MyQueue() { stack<int> s1, s2; }
    stack<int> s1, s2;

    void push(int x) {
        if (s1.size() == 0) {
            s1.push(x);
        } else {
            int n = s1.size();
            for (int i = 0; i < n; i++) {
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(x);
            int m = s2.size();
            for (int i = 0; i < m; i++) {
                s1.push(s2.top());
                s2.pop();
            }
        }
    }

    int pop() {
        int k = s1.top();
        s1.pop();
        return k;
    }

    int peek() { return s1.top(); }

    bool empty() { return s1.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */