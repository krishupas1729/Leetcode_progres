class Solution {
public:
    int revl(int n) {
        int rev = 0;
        while (n != 0) {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        return rev;
        }
        
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n;i++) {
            int ulta = revl(nums[i]);
            nums.push_back(ulta);
        }
        unordered_set<int> st(nums.begin(),nums.end());
        
        return st.size();
    }
};