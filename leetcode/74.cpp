#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    if (rows == 0) return false; // Edge case: Empty matrix

    int cols = matrix[0].size();
    
    for (int i = 0; i < rows; i++) {
        int left = 0, right = cols - 1; // Reset binary search range for each row
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[i][mid] == target) {
                return true; // Target found
            } else if (matrix[i][mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return false; // Target not found
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    cout << (searchMatrix(matrix, 3) ? "true" : "false") << endl;
    return 0;
}
