class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j = nums.size();
        int sindex =-1;
        int eindex=-1;
        while(i<j) {
            if(nums[i]+nums[j] == target) {
                int sindex =i;
                eindex = j;
            }
            
            else if (nums[i]+nums[j] > target){
                i++;
            }
            else {
                j--;
            }
        }
        return sindex,eindex;

        
        
    }
};