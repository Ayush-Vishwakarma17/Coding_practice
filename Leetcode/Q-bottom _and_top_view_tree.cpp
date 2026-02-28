/*

------- Bottom view BFS approach -------

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> result;
        map<int, int> nodes;
        queue<pair<Node* , int>> q;
        q.push(make_pair(root, 0));
        while (!q.empty()) {
            pair<Node*, int> tempNode = q.front();q.pop();
            Node* node = tempNode.first;
            int distance = tempNode.second;
            
            
                nodes[distance] = node -> data;
            
            
            if (node -> left) {
                q.push(make_pair(node->left, distance-1));
            }
            
            if (node -> right) {
                q.push(make_pair(node->right, distance+1));
            }
        }
        for (auto val: nodes) {
            result.push_back(val.second);
        }
        return result;
    }
};


--------------- Top view of Binary Tree --------------------



// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int> result;
        map<int, int> nodes;
        queue<pair<Node* , int>> q;
        q.push(make_pair(root, 0));
        while (!q.empty()) {
            pair<Node*, int> tempNode = q.front();q.pop();
            Node* node = tempNode.first;
            int distance = tempNode.second;
            
            if (nodes.find(distance) == nodes.end()) {
                nodes[distance] = node -> data;
            }
            
            if (node -> left) {
                q.push(make_pair(node->left, distance-1));
            }
            
            if (node -> right) {
                q.push(make_pair(node->right, distance+1));
            }
        }
        for (auto val: nodes) {
            result.push_back(val.second);
        }
        return result;
    }
};

*/