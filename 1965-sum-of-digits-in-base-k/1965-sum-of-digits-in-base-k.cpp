class Solution {
public:
    int sumBase(int n, int k) {
        vector<int> nums;
     while(n > 0) {
    nums.push_back(n % k );
    n /= k;
}

int result = 0;
for(int i = nums.size()-1; i >=0 ; i--) {
        result += nums[i];
}
    return result;
    }
};