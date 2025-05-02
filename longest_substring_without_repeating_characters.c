// Given a string s, find the length of the longest substring without duplicate characters.

// A substring is a contiguous sequence of characters within a string.

// Example 1:

// Input: s = "zxyzxyz"

// Output: 3
// Explanation: The string "xyz" is the longest without duplicate characters.

// Example 2:

// Input: s = "xxxx"

// Output: 1
// Constraints:

// 0 <= s.length <= 1000
// s may consist of printable ASCII characters.
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_map<char, int> x;
            int l = 0, res = 0;
            
            for (int r = 0; r < s.size(); r++) {
                if (x.find(s[r]) != x.end()) {
                    l = max(x[s[r]] + 1, l);
                }
                x[s[r]] = r;
                res = max(res, r - l + 1);
            }
            return res;
        }
    };