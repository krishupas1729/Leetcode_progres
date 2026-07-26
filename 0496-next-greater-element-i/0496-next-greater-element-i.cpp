class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;

        int n = nums2.size();
        vector<int> res(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if (st.empty())
                res[i] = -1;
            else
                res[i] = st.top();
            st.push(nums2[i]);
        }
        int n2 = nums1.size();
        
        vector<int> ans;
        for (int i = 0; i < n2; i++) {
            int j = 0;
            while (nums2[j] != nums1[i]) {
                j++;
            }
            if (nums2[j] == nums1[i]) {
                ans.push_back(res[j]);
            }
        }
        return ans;
    }
};