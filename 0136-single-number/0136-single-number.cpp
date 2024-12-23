class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp;

      for(int i = 0; i < nums.size(); i++) {
        bool check = false;
          for(int j = 0; j < nums.size(); j++) {
            if(i == j )continue;
            else if(nums[i] == nums[j]) check = true;
        }
        if(!check) temp = (nums[i]);
      }
      return temp;
    }
};