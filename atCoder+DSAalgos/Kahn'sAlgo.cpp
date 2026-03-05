/*

-------- topological sort in DAG using BFS kahn's algorithm --------

class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        //making my own adjoint list through map
        //for easiness
        
        unordered_map<int, vector<int>> adj;
        for (auto vec: edges) {
            int u = vec[0];
            int v = vec[1];
            adj[u].push_back(v);
        }
        vector<int> result;
        queue<int> q;
        // making a inorder array to track edges
        vector<int> inorder(V, 0);
        for (int u = 0; u < V; u++) {
            for (auto &v : adj[u]) {
                inorder[v]++;
            }
        }
        
        for (int i = 0; i < V; i++) {
            if (inorder[i] == 0) {
                q.push(i);
            }
        }
        
        while (!q.empty()) {
            int curr = q.front(); q.pop();
            result.push_back(curr);
            
            for (auto &v: adj[curr]) {
                inorder[v]--;
                if (inorder[v] == 0) {
                    q.push(v);
                }
            }
        }
        return result;
    }
};


*/