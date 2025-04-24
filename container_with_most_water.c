// You are given an integer array heights where heights[i] represents the height of the i'th bar.

// You may choose any two bars to form a container. Return the maximum amount of water a container can store.
// Example 1:
// Input: height = [1,7,2,5,4,7,3,6]

// Output: 36
// Example 2:

// Input: height = [2,2,2]

// Output: 4
class Solution {
    public:
        int maxArea(vector<int>& x) {
            int a = 0, b = x.size()-1, z = 0;
            while(a<b)
            {
                if(x[a]<=x[b])
                {
                    z = max(z, x[a]*(b-a));
                    a++;
                    continue;
                }
                else
                {
                    z = max(z, x[b]*(b-a));
                    b--;
                    continue;
                }
            }
            return z;
        }
    };
    