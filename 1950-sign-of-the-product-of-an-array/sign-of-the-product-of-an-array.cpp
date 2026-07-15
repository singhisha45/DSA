class Solution {
public:
    int signFunc(int x) {
        if (x > 0) return 1;
        if (x < 0) return -1;
        return 0;
    }
    
    int arraySign(vector<int>& nums) {
        int sign = 1; // start with positive
        for (int num : nums) {
            if (num == 0) return 0; // product becomes zero
            if (num < 0) sign = -sign; // flip sign for negative numbers
        }
        return sign;
    }
};