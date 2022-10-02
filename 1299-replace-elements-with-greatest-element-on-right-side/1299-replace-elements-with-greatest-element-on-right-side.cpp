class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        res[n-1] = -1;
        for(int i=n-2; i>=0; i--){
            res[i] = max(res[i+1], arr[i+1]);
        }
        return res;
    }
};