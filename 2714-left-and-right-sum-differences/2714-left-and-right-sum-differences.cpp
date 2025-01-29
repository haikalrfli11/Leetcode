class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         vector<int> leftSum;
        vector<int> rightSum;
        vector<int> diff;
        leftSum.push_back(0);
        rightSum.push_back(0);  

     
        int left = 0;
        for(int i = 0; i < nums.size()-1; i++) {
            left += nums[i];
      
            leftSum.push_back(left);
        }
    
        int right = 0;
        for(int i = nums.size()-1; i > 0; i--) {
            right += nums[i];
            rightSum.insert(rightSum.begin(),right);
        }
        for(int i = 0; i < leftSum.size(); i++) {
           diff.push_back(abs(leftSum[i] - rightSum[i]));
        }
        return diff;
    }
};