class Solution {
public:
    void dfs(int src, vector<vector<int>>& rooms, vector<bool>& visited) {
        visited[src] = true;
        for(int node: rooms[src]) {
            if(!visited[node]) {
                dfs(node, rooms, visited);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int noOfRooms = rooms.size();
        vector<bool> visited(noOfRooms, false);
        visited[0] = true;
        for(int i=0; i<noOfRooms; i++) {
            if(visited[i]) {
                dfs(i, rooms, visited);
            }
        }
        for(int i=0; i<noOfRooms; i++) {
            cout << visited[i] << " ";
            if(!visited[i]) {
                return false;
            }
        }
        return true;
    }
};