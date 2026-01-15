/*

class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) { 

    //sorting to find the consecutive easily

        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());
        int maxConsecutiveH = 1;
        int maxConsecutiveV = 1;
        int currentH = 1;
        for (int i = 0; i < hBars.size()-1; i++) {
            if (hBars[i] == hBars[i+1]-1) {
                currentH++;
                maxConsecutiveH = max(maxConsecutiveH, currentH);
            } else {
                currentH = 1;
            }
        }
        currentH = 1;
        for (int i = 0; i < vBars.size()-1; i++) {
            if (vBars[i] == vBars[i+1]-1) {
                currentH++;
                maxConsecutiveV = max(maxConsecutiveV, currentH);
            } else {
                currentH = 1;
            }
        }
            //we found the bars only not the whole square sides so we plus 1.
            in the end returning the area.
        int side = min(maxConsecutiveV, maxConsecutiveH) + 1;
        return side*side;
    }
};


*/