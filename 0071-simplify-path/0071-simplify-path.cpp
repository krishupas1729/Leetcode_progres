class Solution {
public:
    string simplifyPath(string path) {
        stack<int> s;
        int dot = 0;
        int brack = 0;
        string ans = "/";
         vector<string> st;
    for (int i = 0; i < path.size(); i++) {
        string cur;
        while (i < path.size() && path[i] != '/') {
            cur += path[i];
            i++;
        }
        if (cur == "..") {
            if (!st.empty()) st.pop_back();
        } else if (cur != "." && cur != "") {
            st.push_back(cur);
        }
    }
    for (string& s : st) {
        ans += s;
        ans += "/";
    }
    if (ans.size() > 1) ans.pop_back(); 
        return ans;
    }
    
};