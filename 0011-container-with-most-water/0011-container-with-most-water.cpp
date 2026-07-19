class Solution {
public:
    int maxArea(vector<int>& height) {

        int marea = -1;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            marea = max(marea, (min(height[right], height[left])) * (right - left));

            if (height[left] < height[right]) {
                left += 1;
            } else {
                right -= 1;
            }
        }

        return marea;
    }
};