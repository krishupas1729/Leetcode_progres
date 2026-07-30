class StockSpanner {
public:
    StockSpanner() {
        stack<int> st;
    }
    stack<pair<int,int>> st;
    vector<int> a;
    int ind = -1;
    
    int next(int price) {
        int o = 1;
        ind++;
        int ans = 0;
        while(!st.empty() && price >= st.top().first){
            st.pop();
        }
        if(st.empty()){
            ans = ind +1;

        }
        else{
            ans = ind-st.top().second;
        }
        st.push({price,ind});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */