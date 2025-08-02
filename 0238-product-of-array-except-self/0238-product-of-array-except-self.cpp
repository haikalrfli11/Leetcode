class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        int total = 1;
        bool checkZero = false;
        int countNums = 0;
        for(int i = 0; i < nums.size();i++) {
            if(nums[i] == 0)  {
                checkZero  = true;
                countNums++;
                total *= 1;
            }else {
                total *= nums[i];
            }
        }

        if(countNums > 1) {
            total = 0;
        }

    if(checkZero) {
        if(countNums > 1) {
         for(int i = 0; i < nums.size(); i++) {
         result[i] = total;
        }
        }else {
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] != 0 ) {
                    result[i] = 0;
                }else {
                    result[i] = total;
                }
        }

        }
   
    }else {
            for(int i = 0; i < nums.size(); i++) {
                result[i] = total / nums[i];
        }
    }

        return result;
    

        
        
    }
};