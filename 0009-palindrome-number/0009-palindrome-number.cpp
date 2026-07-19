class Solution {
public:
    bool isPalindrome(int x) {
        long long y = x;
        

        if (y<0) {
            return false;
            }
        
        long long rev=0;
        while (y>0) {
            int l=y%10;
            rev=rev*10+l;
            y=y/10;

        }
        return x == rev;

    }
};