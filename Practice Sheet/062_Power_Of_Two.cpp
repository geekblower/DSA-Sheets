/*
  Platform : Leetcode
  Problem : https://leetcode.com/problems/power-of-two/
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n!=0 && n!=INT_MIN) && ((n&(n-1)) == 0) ? true : false;
    }
};
