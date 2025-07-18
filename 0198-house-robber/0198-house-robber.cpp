class Solution {
public:

      int f(int id, vector<int> &nums, vector<int> &dp) {
        if(id == -1) return 0;
        if(id == 0) return nums[id];
        if(dp[id] != -2) return dp[id];

        return dp[id] =  max(nums[id] + f(id-2,nums,dp), f(id-1,nums,dp));
    }
    int rob(vector<int>& nums) {
       vector<int> dp(nums.size(),-2);
        dp[0] = nums[0];
        f(nums.size()-1,nums,dp);
        return dp[nums.size()-1];
    }
};

 