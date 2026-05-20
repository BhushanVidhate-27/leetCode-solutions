// Title: Check if Bitwise OR Has Trailing Zeros
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/

class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int ec = 0;
        for(int i: nums) {
            if(i % 2 == 0) ec++;
            if(ec > 1) return true;
        }
        return ec > 1;
    }
};
