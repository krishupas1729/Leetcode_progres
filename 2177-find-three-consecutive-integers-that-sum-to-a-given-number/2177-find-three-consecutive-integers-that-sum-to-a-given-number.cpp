class Solution {
public:
    vector<long long> sumOfThree(long long n) {
        vector<long long> ans;
        if (n % 3 == 0) {
            long long x = n / 3;

            ans.push_back(x - 1);
            ans.push_back(x);
            ans.push_back(x + 1);
        }
        return ans;
    }
};