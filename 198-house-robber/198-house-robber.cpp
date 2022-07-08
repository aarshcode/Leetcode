class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        if(n==1) return nums[0];
        else if(n==0) return 0;
        ans[0] = nums[0];
        ans[1] = max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            ans[i] = max(ans[i-2]+nums[i], ans[i-1]);
        }
        
        return max(ans[n-1],ans[n-2]);
    }
};