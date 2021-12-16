class Solution {
public:
    vector<vector<int>> getGraph(int noOfCities, vector<vector<int>>& isConnected) {
        vector<vector<int>> graph(noOfCities);
        for(int i=0; i<noOfCities; i++) {
            for(int j=0; j<noOfCities; j++) {
                if(isConnected[i][j]==1) {
                    graph[i].push_back(j);
                }
            }
        }
        return graph;
    }
    void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
        visited[node] = true;
        for(int child: graph[node]) {
            if(!visited[child]) {
                dfs(child, graph, visited);
            }
        }
    }
    int getProvinces(int noOfCities, vector<vector<int>>& graph) {
        vector<bool> visited(noOfCities, false);
        int provinces = 0;
        for(int i=0; i<noOfCities; i++) {
            if(!visited[i]) {
                dfs(i, graph, visited);
                provinces++;
            }
        }
        return provinces;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int noOfCities = isConnected.size();
        vector<vector<int>> graph = getGraph(noOfCities, isConnected);
        return getProvinces(noOfCities, graph);
    }
};