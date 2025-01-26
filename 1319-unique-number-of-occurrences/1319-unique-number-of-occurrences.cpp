class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         vector<int> temp;
      sort(arr.begin(),arr.end());

      int res = 1;
      for(int i = 0; i < arr.size()-1; i++) {
         if(arr[i] == arr[i+1]) {
            res++;
         }else if(arr[i] != arr[i+1] || i == arr.size()-1) {
            temp.push_back(res);
            res = 1;
         }
      }
      temp.push_back(res);
      sort(temp.begin(),temp.end());
      bool check = true;
      for(int i = 0; i < temp.size()-1; i++) {
            if(temp[i] == temp[i+1]) {
               return false;
               
            }
      }
      return check;
    }
};