class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k > 0) {
        sort(gifts.begin(),gifts.end(),greater<int>());
            int temp = gifts[0];
            gifts[0] = floor(sqrt(temp));

            k--;
        }
        long long total = 0;
            for(int i  = 0 ; i < gifts.size(); i++) {
                total += gifts[i];
        }
        return total;
    }
};