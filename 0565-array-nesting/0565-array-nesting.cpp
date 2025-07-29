class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int m = nums.size();


vector<int> tree[m+1];
int maks = 0;
for(int i = 0; i < nums.size(); i++) {
    vector<int> result;
    int res = 0;
    int temp = i;   
    while(tree[temp].empty() ) {
        tree[temp].push_back(nums[temp]);
        res++;
        result.push_back(nums[temp]);
        temp = nums[temp];
}
maks = max(maks,res);
}
        return maks;
    }
};