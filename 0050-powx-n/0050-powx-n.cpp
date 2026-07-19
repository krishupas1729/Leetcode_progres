class Solution {
public:
    double myPow(double x, int n) {
        long long e = n;
        if (e == 0) return 1;
        if (e < 0) {
            e = -e;
            x = 1 / x;
        }
        double hal = myPow(x, e / 2);
        if (e % 2 == 0) {
            return hal * hal;
        } else {
            return x * hal * hal;
        }
    }
};