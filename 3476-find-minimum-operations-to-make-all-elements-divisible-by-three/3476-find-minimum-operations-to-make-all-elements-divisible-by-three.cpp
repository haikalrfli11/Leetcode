class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int total = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] % 3 != 0) {
            total++;
        }
    }
    return  total;
    }
};