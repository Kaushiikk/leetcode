// Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

// An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

// Example 1:

// Input: s = "racecar", t = "carrace"

// Output: true
// Example 2:

// Input: s = "jar", t = "jam"

// Output: false
// Constraints:

// s and t consist of lowercase English letters.
class Solution {
    public:
        bool isAnagram(string s, string t) {
            vector<int> a = {0};
            for(int i=0;i<s.length();i++)
            {
                sort(s.begin(),s.end());
                sort(t.begin(),t.end());
                return s == t;
            }
        }
    };
    