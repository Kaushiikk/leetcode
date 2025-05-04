// You are given an m x n 2-D integer array matrix and an integer target.

// Each row in matrix is sorted in non-decreasing order.
// The first integer of every row is greater than the last integer of the previous row.
// Return true if target exists within matrix or false otherwise.

// Can you write a solution that runs in O(log(m * n)) time?

// Example 1:
// Input: matrix = [[1,2,4,8],[10,11,12,13],[14,20,30,40]], target = 10

// Output: true
// Example 2:
// Input: matrix = [[1,2,4,8],[10,11,12,13],[14,20,30,40]], target = 15

// Output: false
// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -10000 <= matrix[i][j], target <= 10000
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& m, int t) {
            int i = 0, j = m[0].size()-1,f = 0;
            while(i<m.size())
            {
                if(m[i][j] == t)
                return true;
                else if(m[i][j] > t)
                {
                    f =i;
                    break;
                }
                i++;
            }
            j = 0;
            while(j<m[0].size())
            {
                if(m[f][j] == t)
                return true;
                j++;
            }
            return false;
        }
    };
    