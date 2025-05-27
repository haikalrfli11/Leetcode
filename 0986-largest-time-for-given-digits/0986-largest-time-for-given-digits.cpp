class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
       string hour = "";
        int i = 2;
        while(i >= 0 && hour.length() < 5) {
            vector<int> temp = arr;
            auto it = find(temp.begin(),temp.end(),i);
            if(distance(temp.begin(),it) < temp.size()) {
                hour += "" + to_string(i);
                temp[distance(temp.begin(),it)] = -1;
             
            }

         

         if(hour[0] == '2') {
            for(int j = 3; j >= 0; j--) {
                auto it = find(temp.begin(),temp.end(),j);
                if(distance(temp.begin(),it) < temp.size()) {
                    hour += "" + to_string(j);
                    temp[distance(temp.begin(),it)] = -1;
                    break;
                    
              
                }
            }
         
    }else if(hour[0] == '0' || hour[0] == '1' ) {
        for(int j = 9; j >= 0; j--) {
            auto it = find(temp.begin(),temp.end(),j);
            if(distance(temp.begin(),it) < temp.size()) {
                hour += "" + to_string(j);
                 temp[distance(temp.begin(),it)] = -1;
                    break;
                
            
            }
        }

    }

    if(hour[0] == '0' || hour[0] == '1' || hour[0] == '2') {
        hour += ":";
         for(int j = 5; j >= 0; j--) {
            auto it = find(temp.begin(),temp.end(),j);
            if(distance(temp.begin(),it) < temp.size()) {
                hour += "" + to_string(j);
                 temp[distance(temp.begin(),it)] = -1;
                    break;
             
            }
        }
       for(int j = 9; j >= 0; j--) {
            auto it = find(temp.begin(),temp.end(),j);
            if(distance(temp.begin(),it) < temp.size()) {
                hour += "" + to_string(j);
             break;
              
            }
        }
    }

    
    
    i--;
    if(hour.length() < 5) {
        hour = "";
    }
}
    return hour;
    }
};