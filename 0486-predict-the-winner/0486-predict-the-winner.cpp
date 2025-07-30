class Solution {
public:
    bool predict(vector<int> &nums, int begin, int end, int score1, int score2, int turn) {
        if(begin > end) {
            return score1 >= score2;
        }

     if(turn == 1) {
        return predict(nums, begin+1, end, score1 +nums[begin],score2,2) ||predict(nums, begin, end-1, score1 +nums[end],score2,2);
     }else {
          return predict(nums, begin+1, end, score1 ,score2+nums[begin],1) && predict(nums, begin, end-1, score1 ,score2 +nums[end],1);
     }
}
    bool predictTheWinner(vector<int>& nums) {
        return predict(nums,0,nums.size()-1,0,0,1);
    }
};