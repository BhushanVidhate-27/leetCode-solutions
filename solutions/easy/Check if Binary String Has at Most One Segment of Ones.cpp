// Title: Check if Binary String Has at Most One Segment of Ones
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/

class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 0;
        while(i < n && s[i] == '1')i++;
        for(int j=i; j<n; j++) {
            if(s[j] == '1') return false;
        }
    }
        return true;
        int n = s.size();
};
