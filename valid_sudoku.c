// You are given a a 9 x 9 Sudoku board board. A Sudoku board is valid if the following rules are followed:

// Each row must contain the digits 1-9 without duplicates.
// Each column must contain the digits 1-9 without duplicates.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without duplicates.
// Return true if the Sudoku board is valid, otherwise return false

// Note: A board does not need to be full or be solvable to be valid.
// Input: board = 
// [["1","2",".",".","3",".",".",".","."],
//  ["4",".",".","5",".",".",".",".","."],
//  [".","9","8",".",".",".",".",".","3"],
//  ["5",".",".",".","6",".",".",".","4"],
//  [".",".",".","8",".","3",".",".","5"],
//  ["7",".",".",".","2",".",".",".","6"],
//  [".",".",".",".",".",".","2",".","."],
//  [".",".",".","4","1","9",".",".","8"],
//  [".",".",".",".","8",".",".","7","9"]]

// Output: true
// Example 2:

// Input: board = 
// [["1","2",".",".","3",".",".",".","."],
//  ["4",".",".","5",".",".",".",".","."],
//  [".","9","1",".",".",".",".",".","3"],
//  ["5",".",".",".","6",".",".",".","4"],
//  [".",".",".","8",".","3",".",".","5"],
//  ["7",".",".",".","2",".",".",".","6"],
//  [".",".",".",".",".",".","2",".","."],
//  [".",".",".","4","1","9",".",".","8"],
//  [".",".",".",".","8",".",".","7","9"]]

// Output: false
// Explanation: There are two 1's in the top-left 3x3 sub-box.

// Constraints:

// board.length == 9
// board[i].length == 9
// board[i][j] is a digit 1-9 or '.'
class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& mat) {
            vector<int> rows(9);
            vector<int> cols(9);
            vector<int> sub(9);
            for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (mat[i][j] == '.')
                    continue;
    
                int val = mat[i][j];
                int pos = 1 << (val - 1); 
                if ((rows[i] & pos) > 0)
                    return false;
    
                rows[i] |= pos; 
                if ((cols[j] & pos) > 0)
                    return false; 
    
                cols[j] |= pos; 
                int idx = (i / 3) * 3 + j / 3;
                if ((sub[idx] & pos) > 0)
                    return false;
    
                sub[idx] |= pos; 
            }
        }
        return true; 
        }
    };
    