/*



class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minabs = INT_MAX;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size()-1; i++) {
            int diff = abs(arr[i]-arr[i+1]);
            minabs = min(minabs, diff);
        }
        vector<vector<int>>result;
        for (int i = 0; i < arr.size()-1; i++) {
            int diff = abs(arr[i]-arr[i+1]);
            if (diff == minabs) {
                vector<int> pair;
                pair.push_back(arr[i]);
                pair.push_back(arr[i+1]);
                result.push_back(pair);
            }
        }
        return result;
    }
};

*/