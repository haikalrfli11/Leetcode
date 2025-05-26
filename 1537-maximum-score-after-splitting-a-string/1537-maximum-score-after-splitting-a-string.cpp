class Solution {
public:
    int maxScore(string s) {
        string temp = "";
       int max = 0;
       

       for(int i = 0; i < s.length(); i++) {
           int count = 0;
            temp += s[i];
            string temp2 = s.substr(i+1, s.length());
            if(temp2 != "" && temp != "") {
                for(int j = 0; j < temp.length(); j++ ){
                if(temp[j] == '0') count++;
            }
            for(int k = 0; k < temp2.length(); k++ ){
                if(temp2[k] == '1') count++;
            }

              if(count > max) {
                max = count;
            }
            }
            

          
           
       }
       return max;
    }
};