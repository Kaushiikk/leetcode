// Given an integer array nums, return an array output where output[i] is the product of all the elements of nums except nums[i].

// Each product is guaranteed to fit in a 32-bit integer.

// Follow-up: Could you solve it in 
// O
// (
// n
// )
// O(n) time without using the division operation?

// Example 1:

// Input: nums = [1,2,4,6]

// Output: [48,24,12,8]
// Example 2:

// Input: nums = [-1,0,1,2,3]

// Output: [0,-6,0,0,0]
// Constraints:

// 2 <= nums.length <= 1000
// -20 <= nums[i] <= 20
class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int p = 1, z = 0;
            for(int i : nums)
            {
                if(i !=0)
                {
                    p *= i;
                }
                else
                z ++;
            }
            for(int i = 0;i<nums.size();i++)
            {
                if(z>=2)
                {
                    nums.at(i) = 0;
                }
                else if(z == 1 && nums.at(i) == 0)
                {
                    nums.at(i) = p;
                    p = 0;
                }
                else if(z == 1)
                {
                    nums.at(i) = 0;
                }
                else
                {
                    nums.at(i) = p/nums.at(i);
                }
            }
            return nums;
        }
    };
    