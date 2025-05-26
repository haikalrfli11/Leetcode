class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total = 0;
        long long count = 0;
      for(int i = 0; i < nums.size(); i++) {
            total += nums[i];
      }
      long long leftSum = 0;
       for(int i = 0; i < nums.size()-1; i++) {
        leftSum += nums[i];
            if(leftSum>= total - leftSum) {
                count++;
           
            }
      }
      return count;
    }
};