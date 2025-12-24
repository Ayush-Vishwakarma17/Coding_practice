#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int totalApples = 0;
        for (auto apples: apple) {
            totalApples+=apples;
        }
        int boxes = 0;
        for (int i = capacity.size()-1; i >= 0; i--) {
            boxes++;
            totalApples -= capacity[i];
            if (totalApples <= 0) {
                break;
            }
        }
        return boxes;
    }
};
int main() {
    Solution check;
    vector<int>apple({1,2,3,4,2});
    vector<int>capacity({5,2,13,4,10});
    check.minimumBoxes(apple, capacity);
    return 0;
}