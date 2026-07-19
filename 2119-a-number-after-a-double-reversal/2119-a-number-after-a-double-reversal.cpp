class Solution {
public:
    int revl(int n) {
        int rev = 0;
        while (n != 0) {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        return rev;
        }
    bool isSameAfterReversals(int num ) {

        
        int r1 = revl(num);   // 625
        int r2 = revl(r1);    //526
        if(r2== num) {
        return true;
        }
        return false;
}
}
;