// You are given an array of strings tokens that represents a valid arithmetic expression in Reverse Polish Notation.

// Return the integer that represents the evaluation of the expression.

// The operands may be integers or the results of other operations.
// The operators include '+', '-', '*', and '/'.
// Assume that division between integers always truncates toward zero.
// Example 1:

// Input: tokens = ["1","2","+","3","*","4","-"]

// Output: 5

// Explanation: ((1 + 2) * 3) - 4 = 5
// Constraints:

// 1 <= tokens.length <= 1000.
// tokens[i] is "+", "-", "*", or "/", or a string representing an integer in the range [-100, 100].
class Solution {
    public:
        int evalRPN(vector<string>& a) {
            stack<int> b;
            int y = 0;
            for(int i=0;i<a.size();i++)
            {
                if(b.empty())
                b.push(stoi(a[i]));
                if(a[i] == "+")
                {
                    y = b.top();b.pop();
                    y += b.top();b.pop();
                    b.push(y);
                }
                else if(a[i] == "-")
                {
                    y = (-1 * b.top());b.pop();
                    y += b.top();b.pop();
                    b.push(y);
                }
                else if(a[i] == "*")
                {
                    y = b.top();b.pop();
                    y  *= b.top();b.pop();
                    b.push(y);
                }
                else if(a[i] == "/")
                {
                    int x = b.top();b.pop();
                    y = b.top() / x;b.pop();
                    b.push(y);
                }
                else
                b.push(stoi(a[i]));
            }
            return b.top();
        }
    };
    