class Solution {
public:

    void check(vector<vector<int>> &rooms, vector<int> &visited_room,int node) {
    if(visited_room[node] == 1) return;
    visited_room[node] = 1;
 
        for(auto &neighbour : rooms[node]) {
        check(rooms,visited_room,neighbour);
    

    }
 

}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
   
    int m = rooms.size();
 


    

    vector<int> visited_room(m,0);
    for(int i = 0; i < rooms[0].size() ; i++) {
        check(rooms,visited_room,rooms[0][i]);
            
    }
    visited_room[0] = 1;
    bool res = true;
    for(int i = 0; i < m; i++) {
        if(visited_room[i] == 0) res = false;

    }
    return res;
        
    }
};