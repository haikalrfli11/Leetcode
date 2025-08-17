class Solution {
public:
    int singleNumber(vector<int>& nums) {
          unordered_map<int,int> arr;

   for(int i = 0; i < nums.size(); i++) {
      if(arr.find(nums[i]) == arr.end()) {
         arr[nums[i]] = 1;
      }else {
         arr[nums[i]]++;
      }
   }

   int result = 0;
   for(auto &pair : arr) {
      if(pair.second == 1) result = pair.first;
   }
   return result;
        
    }
};