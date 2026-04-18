class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        int m = matrix.size();
        int n = matrix[0].size();
        
        // Treat it as a 1D array from index 0 to (m*n - 1)
        int low = 0;
        int high = (m * n) - 1;
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            
            // Map 1D index back to 2D
            int row = mid / n;
            int col = mid % n;
            int val = matrix[row][col];
            
            if(val == target) return true;
            else if(val < target) low = mid + 1;
            else high = mid - 1;
        }
        
        return false;
    }
};