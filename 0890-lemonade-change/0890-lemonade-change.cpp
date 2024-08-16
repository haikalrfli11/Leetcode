class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       bool check = false;
           int five = 0;
            int ten = 0;
    for(int i  = 0; i < bills.size(); i++) {
        if(bills[i] == 5) {
            five++;
            check = true;
        }else if(bills[i] == 10) {
            if(five > 0) {
                five--;
                ten++;
                check = true;
            }else {
                check = false;
            }
        }else {
           if((five > 0 && ten > 0) ) {
                five--;
                ten--;
                check = true;
            }else if( (five >= 3)) {
                five -= 3;
                check = true;
            }else {
                check = false;
            }
        }
          
    if(check == false) break;
    }
    
    return check;
    }
};