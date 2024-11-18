class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
          vector<int> result;
        for(int i = 0; i < code.size(); i++) {
            result.push_back(code[i]);
        }
        if(k > 0) {
            for(int i = 0; i < code.size(); i++) {
                int temp = i+1;
                int cur = k;
                result[i] = 0;
                while(cur > 0) {
                    result[i] += code[temp % code.size()];
             
                    temp++;
                    cur--;
                }
            }
        }else if(k < 0) {
            for(int i = 0; i < code.size(); i++) {
                int temp = i-1;
               
                int cur = -k;
                result[i] = 0;
                while(cur > 0) {
                    if(temp == -1) {
                    temp = code.size()-1;
                }
              
                    result[i] += code[(temp % code.size())];
                   
                    temp--;
                    cur--;
                }
            }
        }else {
            for(int i = 0; i < code.size(); i++) {
                result[i] = 0;
            }
        }

       

        return result;

    }
    
};