class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum =0;
        int m = 0;
        for(int i=0;i<nums.size();i++) {
            sum+= nums[i];
            m=max(m,nums[i]);
        }
        if(sum%k != 0) {
            int mo = sum/k;
            int a = k*mo;

            return sum-a;
        }
        return 0;
    }
};