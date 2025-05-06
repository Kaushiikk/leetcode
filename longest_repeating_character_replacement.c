// You are given a string s consisting of only uppercase english characters and an integer k. You can choose up to k characters of the string and replace them with any other uppercase English character.

// After performing at most k replacements, return the length of the longest substring which contains only one distinct character.

// Example 1:

// Input: s = "XYYX", k = 2

// Output: 4
// Explanation: Either replace the 'X's with 'Y's, or replace the 'Y's with 'X's.

// Example 2:

// Input: s = "AAABABB", k = 1

// Output: 5
// Constraints:

// 1 <= s.length <= 1000
// 0 <= k <= s.length
class Solution {
    public:
        int characterReplacement(std::string s, int k) {
            unordered_map<char, int> count;
            int res = 0;
    
            int l = 0, maxf = 0;
            for (int r = 0; r < s.size(); r++) {
                count[s[r]]++;
                maxf = max(maxf, count[s[r]]);
    
                while ((r - l + 1) - maxf > k) {
                    count[s[l]]--;
                    l++;
                }
                res = max(res, r - l + 1);
            }
    
            return res;
        }
    };