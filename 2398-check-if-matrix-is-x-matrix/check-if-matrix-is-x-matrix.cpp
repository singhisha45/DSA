class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n;  // total number of cells

        for (int k = 0; k < total; k++) {
            int i = k / n;   // row index
            int j = k % n;   // column index

            // Diagonal positions must be non-zero
            if (i == j || i + j == n - 1) {
                if (grid[i][j] == 0) return false;
            } 
            // Non-diagonal positions must be zero
            else {
                if (grid[i][j] != 0) return false;
            }
        }
        return true;
    }
};