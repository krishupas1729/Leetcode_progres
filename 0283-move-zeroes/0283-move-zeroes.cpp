class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z=0;
        for (int i = 0 ; i<nums.size();i++) {
            if (nums[i]!=0) {
                if(i!=z){
                    nums[z]=nums[i];
                    nums[i]=0;
                    z++;
                }
                else{
                    z++;
                }
                
            }
        }
        return ;

    }
};