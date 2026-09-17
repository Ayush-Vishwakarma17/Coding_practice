/*

------------------ DFS approach to find cycle in a directed graph --------------------

class Solution {
  public:
    bool isFound(map<int,vector<int>>& adj, vector<bool>& visited, vector<bool>& inRecursion, int u) {
            visited[u] = true;
            inRecursion[u] = true;
            for (auto v: adj[u]) {
                if (!visited[v]) {
                    if (isFound(adj, visited, inRecursion, v)) {
                        return true;
                    }
                } else if (inRecursion[v]) {
                    return true;
                }
            }
            inRecursion[u] = false;
            return false;
        }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        map<int, vector<int>>adj;
        for (auto vec: edges) {
            int u = vec[0];
            int v = vec[1];
            adj[u].push_back(v);
        }
        vector<bool> visited(V, false);
        vector<bool> inRecursion(V, false);
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (isFound(adj, visited, inRecursion, i)) {
                    return true;
                }
            }
        }
        return false;
    }
};


*/