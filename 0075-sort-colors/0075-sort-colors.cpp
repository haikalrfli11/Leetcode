class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<pair<int,int>> arr = {
            {0,0},
            {1,0},
            {2,0}
        };
        vector<int> temp;
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                arr[0].second++;
            }else if(nums[i] == 1) {
                arr[1].second++;
            }else if(nums[i] == 2) {
                arr[2].second++;
                two++;
            }
        }
        for(int i = 0; i < arr.size(); i++) {
            for(int j = 0; j < arr[i].second; j++) {
                temp.push_back(i);
            }
        }
    nums = temp;


    }
};