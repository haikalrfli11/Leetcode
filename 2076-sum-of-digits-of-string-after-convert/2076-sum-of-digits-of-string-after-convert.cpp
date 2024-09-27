class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";

 for(int i = 0; i < s.length(); i++) {
  string a = to_string(int(s[i])-96);
  temp += a;
 }
 
  string res = temp;
  int total = 0;
 while(k > 0) {
  int sum = 0;
  for(int i =0; i < res.length();i++) {
    sum += int(res[i]) -48;
  }
  res = to_string(sum);

  k--;
  total = sum;
 }
 return total;
    }
};