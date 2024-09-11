class Solution {
public:
    string decToBinary(int n) {
    // Array to store binary number
 

    string biner = "";

    if(n == 0) {
      biner += to_string(n);
      return biner;
    }else {
      int i = 0;
    while (n > 0) {
      
      int binary;
        // array
        binary = n % 2;
        biner += to_string(binary);
        n = n / 2;
        i++;
    }
    string temp = "";
    for(int i = biner.length()-1; i >= 0; i--) {
      temp += biner[i];

    }
    return temp;
    }
    
}
    int minBitFlips(int start, int goal) {
        string binStart = decToBinary(start);
  string binGoal = decToBinary(goal);
  
  int maks = max(binStart.length(),binGoal.length());
  

  if(binStart.length() > binGoal.length()) {
    int temp = binStart.length() - binGoal.length();
    for(int i = 0; i < temp; i ++) {
      binGoal.insert(0,"0");
    }
  }else {
     int temp = binGoal.length() - binStart.length();
    for(int i = 0; i < temp; i ++) {
      binStart.insert(0,"0");
    }
  }
 

  int temp = 0;
  for(int i = maks; i >=0; i--) {
    if(binStart[i] != binGoal[i]) temp++;
  }

    return  temp;
    }
};