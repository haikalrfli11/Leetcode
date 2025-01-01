class Solution {
public:
    int calPoints(vector<string>& operations) {
         vector<int> temp;
     
      int j = 0;
      int total = 0;
      for(int i = 0; i < operations.size(); i++) {
        if(operations[i] == "D") {
          temp.push_back(temp[j-1] *2 );
          j++;
        }else if(operations[i] == "C") {
          temp.pop_back();
          j--;
        }else if(operations[i] == "+") {
          temp.push_back(temp[j-1] + temp[j-2]);
          j++;
        }else {
          temp.push_back(stoi(operations[i]));
          j++;
        }
      }

         for(int i = 0; i < temp.size(); i++) {
          total += temp[i];
      }
      return total;
    }
};