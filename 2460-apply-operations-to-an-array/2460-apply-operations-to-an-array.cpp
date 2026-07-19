class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=1; i<nums.size();i++) {
            if(nums[i-1]==nums[i]) {
                nums[i-1]=2*(nums[i-1]);
                nums[i]=0;

            }
        } 
            int z= 0;
        for(int j =0;j<nums.size();j++) {
            if (nums[j] != 0) {
                if (z!=j) {
                    nums[z]=nums[j];
                    nums[j]=0;
                    z++;
                }
                else{
                    z++;
                }
            }
        }
    
    return nums ;
        
    }
};