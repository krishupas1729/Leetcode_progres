class Solution {
public:
    vector<int> getConcatenation(vector<int>& a) {
        int n =a.size();
        for(int i=n;i<2*n;i++) {
            
            a.push_back(a[i-n]);

        }
        return a;
    }
};