/*

------------------ O(n) solution without using binary search ------------

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0; int j = nums.size()-1;
        while (i < nums.size() && nums[i] != target) {
            i++;
        }
        while (j >= 0 && nums[j] != target) {
            j--;
        }
        if (i < nums.size() && j >= i) {
            return {i,j};
        }
        return {-1,-1};
    }
};

------------------- O(log(n)) solution using binary search algorithm ------------

//we have to binary search the left most target index
//we have to binary search the right most target index
 O(2log(n)) ------> O(log(n))

class Solution {
public:
int LBS(vector<int>& nums, int target) {
    int idx = -1;
    int s = 0, e = nums.size()-1;
    while (s <= e) {
        int mid = s + (e-s)/2;
        if (nums[mid] == target) {
            idx = mid; 
            e = mid-1;
        } else if (nums[mid] > target) {
            e = mid-1;
        } else {
            s = mid +1;
        }
    }
    return idx;
}

int RBS(vector<int>& nums, int target) {
    int idx = -1;
    int s = 0, e = nums.size()-1;
    while (s <= e) {
        int mid = s + (e-s)/2;
        if (nums[mid] == target) {
            idx = mid; 
            s = mid+1;
        } else if (nums[mid] > target) {
            e = mid-1;
        } else {
            s = mid +1;
        }
    }
    return idx;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int leftMost = LBS(nums, target), rightMost = RBS(nums,  target);
        return {leftMost, rightMost};
    }
};

*/