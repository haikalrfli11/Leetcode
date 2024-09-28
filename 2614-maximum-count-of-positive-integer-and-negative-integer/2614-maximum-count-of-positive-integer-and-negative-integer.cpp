class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maks = 0;
        int min = 0;
        for(int  i = 0; i < nums.size();i++) {
            if(nums[i] > 0)maks++;
            else if (nums[i] < 0) min++;
        }
        return max(maks,min);
    }
};