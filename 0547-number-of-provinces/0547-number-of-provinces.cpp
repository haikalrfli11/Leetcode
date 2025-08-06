class Solution {
public:
    void travers(vector<int> graph[], vector<bool> &visited,int node) {
    if(visited[node]) return;
    visited[node] = true;
    
    for(auto &neighbour : graph[node]) {
        travers(graph, visited, neighbour);
    }

}

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();

    vector<int> graph[n+1];
    for(int i  = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && isConnected[i][j] == 1) {
                graph[i+1].push_back(j+1);
            }
        }
    }
    int total = 0;
    vector<bool> visited(n+1,false);
    for(int i = 1; i < n+1; i++) {
        if(!visited[i]) {
            travers(graph,visited,i);
            total++;
        }
    }
    return total;
        
    }
};