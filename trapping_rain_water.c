// Trapping Rain Water
// You are given an array non-negative integers height which represent an elevation map. Each value height[i] represents the height of a bar, which has a width of 1.

// Return the maximum area of water that can be trapped between the bars.
// Input: height = [0,2,0,3,1,0,1,3,2,1]

// Output: 9
// Constraints:

// 1 <= height.length <= 1000
// 0 <= height[i] <= 1000
class Solution {
    public:
        int trap(vector<int>& x) {
            int a = 0, b = x.size()-1, lm = x[a],rm = x[b], m = 0;
            while(a<b)
            {
                if(lm>rm)
                {
                    b--;
                    rm = max(rm,x[b]);
                    m += rm-x[b];
                }
                else
                {
                    a++;
                    lm = max(lm,x[a]);
                    m += lm-x[a];
                }
            }
            return m;
        }
    };
    