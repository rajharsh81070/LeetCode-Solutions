class Solution {
public:
    vector<vector<int>> paths;
    void findPathsDFS(int node, int dest, vector<vector<int>>& graph, vector<int>& path) {        
        if(node==dest) {
            path.push_back(node);
            paths.push_back(path);
            path.pop_back();
            return ;
        }
        path.push_back(node);
        for(int child: graph[node]) {
            findPathsDFS(child, dest, graph, path);
        }
        path.pop_back();
        return ;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int noOfNodes = graph.size();
        vector<int> path;
        int src = 0, dest = noOfNodes - 1;
        path.push_back(src);
        for(int node: graph[src]) {
            findPathsDFS(node, dest, graph, path);
        }
        return paths;
    }
};