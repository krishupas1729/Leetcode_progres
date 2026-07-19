class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int s = INT_MIN;
        int start = -1;
        int end = -1;
        for (int i = 0; i < nums.size(); i++) {

            
            sum += nums[i];
            if (sum > s || sum>0) {
                s = max(sum, s);
            }
            if (sum < 0) {
                s=max(sum,s);
                sum = 0;
            }
            
        }
        return s;
    }
};