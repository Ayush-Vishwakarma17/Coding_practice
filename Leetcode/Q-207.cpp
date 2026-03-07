/*

----------- graph BFS + kahn's algorithm ------------- course schedule problem

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        map<int, vector<int>> adj;
        vector<int> indegree(numCourses,0);
        
        for (auto &vec: prerequisites) {
            int u = vec[0];
            int v = vec[1];
            adj[u].push_back(v);
        }

    for (int i = 0; i < numCourses; i++) {
        for (auto &v: adj[i]) {
            indegree[v]++;
        }
    }

    queue<int> q; 
    for (int i = 0; i < numCourses; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    int count = 0;
    while (!q.empty()) {
        int curr = q.front();q.pop();
        count++;
        for (auto &v: adj[curr]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }
    return (count == numCourses) ? true : false;
    }
};

*/