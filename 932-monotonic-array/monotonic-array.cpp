class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       if (nums.size() <= 2) return true; // single element or two elements are always monotonic

        bool increasing = true, decreasing = true;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i+1]) {
                increasing = false;
            }
            if (nums[i] < nums[i+1]) {
                decreasing = false;
            }
        }

        return increasing || decreasing;
    }
};