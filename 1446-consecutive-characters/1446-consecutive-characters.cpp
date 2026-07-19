class Solution {
public:
    int maxPower(string s) {
        int maxi=0,ch=0;
        int j=0;
        for(int i = 0;i<s.size();i++) {
            
            if(s[i]==s[j]){
                ch++;
                maxi=max(maxi,ch);
            }
            else{
                j++;
                ch=0;
                i--;
            }
        }
        return maxi;
    }
};