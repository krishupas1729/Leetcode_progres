class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        int x= lower_bound(a.begin(),a.end(),target) -a.begin();
        return x;
    }
};