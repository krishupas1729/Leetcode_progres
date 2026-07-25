class Solution {
public:
    vector<int> NSE(vector<int>& arr){
        int N = arr.size();
        vector<int> nse(N);
        stack<int> st;
        for(int i =N-1;i>=0 ; i--){
            while(!st.empty() && arr[i] <= arr[st.top()]){
                st.pop();
            }
            if(st.empty()) {
                nse[i] = N;
            }
            else nse[i] = st.top();
            st.push(i);

        }
        return nse;
    }
    vector<int> PSEE(vector<int>& arr){
        int N = arr.size();
        vector<int> psee(N);
        stack<int> st;
        for(int i = 0 ; i<arr.size(); i++){
            while(!st.empty() && arr[i] < arr[st.top()]){
                st.pop();
            }
            if(st.empty()) {
                psee[i] = -1;
            }
            else psee[i] = st.top();
            st.push(i);
        }
        return psee;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse = NSE(arr);
        vector<int> psee = PSEE(arr);
        int total = 0 ;
        int mod = 1e9 + 7; 
        for(int i = 0 ;i<arr.size();i++){
            int left = i-psee[i];
            int right = nse[i]-i;
            total = (total + (left*right*1LL*arr[i])%mod)%mod;
        } 
        return total;
    }
};