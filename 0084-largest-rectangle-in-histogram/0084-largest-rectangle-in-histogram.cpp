class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        stack<int> st;
        int marea= 0;
        int pse = -1;
        int  n = a.size();
        for(int i = 0 ; i <= a.size()-1; i++) {
            while(!st.empty() && a[st.top()] > a[i]) {
                int el  = st.top();
                st.pop();
                int nse  = i;
                if(st.empty()) { pse = -1;}
                else { pse = st.top();}
                int area = a[el]*(nse-pse-1);
                marea = max(area , marea);
            }
            st.push(i);
            

        }
        while(!st.empty()) {
                int nse = n;
                int el = st.top();
                st.pop();
                if(st.empty()) { pse = -1;}
                else { pse = st.top();}
                marea = max( marea , (nse-pse-1)*a[el]);
            }
        return marea;
    }
};