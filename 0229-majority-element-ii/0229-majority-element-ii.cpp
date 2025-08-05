class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          unordered_map<int,int> count;
    vector<int> temp;
    
    for(int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
    }


    for(auto& x : count) {
        if(x.second > floor(nums.size()/3)) {
            temp.push_back(x.first);
        }
    }
        return temp;
    }
};