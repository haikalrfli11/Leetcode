class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
         int temp = numBottles;
        int total = numBottles;
 while(temp >= numExchange) {
  total += temp / numExchange;

  temp = (temp/ numExchange) + (temp %numExchange);

 }
    return  total;
    }
};