class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();
        int x = 0;
        if (n == 0) {
            return 0;
        }
        int large = 1;
        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(a[i]);
        }
        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int c = 1;
                
                while (st.find(it + 1) != st.end()) {
                    it++;
                    c += 1;
                }
                large = max(large, c);
            }

            
        }
        return large;
    }
};