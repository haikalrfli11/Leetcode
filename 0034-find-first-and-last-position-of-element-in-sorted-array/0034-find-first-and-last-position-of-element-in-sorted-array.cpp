class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1,-1};
        int found = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(found == 0 && nums[i] == target) {
                result[0] = i;
                found++;
            }else if(found != 0 && nums[i] == target) {
                result[1] = i;
                found++;
            }
        }
        if(found == 1) {
            result[1] = result[0];
        }
        return result;
    }
};