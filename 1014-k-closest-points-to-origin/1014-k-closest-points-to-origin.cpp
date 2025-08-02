class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<double,double>> distance;
        for(int i = 0; i < points.size();i++) {
    double x = pow(points[i][0],2);
    double y = pow(points[i][1],2);
    double result = sqrt(x+y);
    distance.push_back(make_pair(result,i));
    // cout << result << endl;
}
sort(distance.begin(),distance.end());

vector<vector<int>> result;

for(int i = 0; i < k;i++) {
    vector<int> temp;
    temp.push_back(points[distance[i].second][0]);
    temp.push_back(points[distance[i].second][1]);
    
    result.push_back(temp);
    
}
return result;
    }
};