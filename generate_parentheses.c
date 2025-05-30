// You are given an integer n. Return all well-formed parentheses strings that you can generate with n pairs of parentheses.

// Example 1:

// Input: n = 1

// Output: ["()"]
// Example 2:

// Input: n = 3

// Output: ["((()))","(()())","(())()","()(())","()()()"]
// You may return the answer in any order.

// Constraints:

// 1 <= n <= 7
class Solution {
    public:
        void backtrack(int openN, int closedN, int n, vector<string>& res, string& stack) {
            if (openN == closedN && openN == n) {
                res.push_back(stack);
                return;
            }
    
            if (openN < n) {
                stack += '(';
                backtrack(openN + 1, closedN, n, res, stack);
                stack.pop_back();
            }
            if (closedN < openN) {
                stack += ')';
                backtrack(openN, closedN + 1, n, res, stack);
                stack.pop_back();
            }
        }
    
        vector<string> generateParenthesis(int n) {
            vector<string> res;
            string stack;
            backtrack(0, 0, n, res, stack);
            return res;
        }
    };