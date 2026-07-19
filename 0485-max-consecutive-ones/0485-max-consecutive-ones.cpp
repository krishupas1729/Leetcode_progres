class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int one=0 ,maxone = 0;
        for(int i = 0;i<nums.size();i++) {
            if(nums[i]==1) {
                one += 1;
                maxone=max(one,maxone);
            }
            else{
                    one=0;
            }
        }
        return maxone;
       
    }
};