class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> temp;

         for(int i = 0; i < nums2.size(); i++) {
             temp.push_back(nums2[i]);
 }
         for(int i = 0; i < nums1.size(); i++) {
             temp.push_back(nums1[i]);
 }

  sort(temp.begin(),temp.end());
  double res = 0;

   if(temp.size() % 2 != 0) {
  res += temp[temp.size() /2];
    
  }else if(temp.size() % 2 == 0) {
  res += (temp[temp.size() /2] + temp[temp.size() /2 - 1]) / 2;
   
 

 }

    return res;


    }


    
};