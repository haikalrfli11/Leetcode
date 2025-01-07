class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> arr;
     for(int i = 0; i < boxes.length(); i++) {
        int temp = 0;
        for(int j = 0 ; j < boxes.length(); j++) {
            if(boxes[j] == '1' && i != j) temp += abs(i-j) ;
        }
        arr.push_back(temp);
      
     }
     return arr;
    }
};