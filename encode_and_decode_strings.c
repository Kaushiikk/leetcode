// Design an algorithm to encode a list of strings to a single string. The encoded string is then decoded back to the original list of strings.

// Please implement encode and decode

// Example 1:

// Input: ["neet","code","love","you"]

// Output:["neet","code","love","you"]
// Example 2:

// Input: ["we","say",":","yes"]

// Output: ["we","say",":","yes"]
// Constraints:

// 0 <= strs.length < 100
// 0 <= strs[i].length < 200
// strs[i] contains only UTF-8 characters.
class Solution {
    public:
    
        string encode(vector<string>& strs) {
            string x;
            for(string a : strs)
            {
                x += a;
                x += '-';
            }
            return x;
        }
    
        vector<string> decode(string s) {
            string a;
            vector<string> b;
            for(int i=0;i<s.size();i++)
            {
                if(s.at(i) == '-')
                {
                    b.push_back(a);
                    a = "";
                }
                else
                a += s[i];
            }
            return b;
        }
    };
    