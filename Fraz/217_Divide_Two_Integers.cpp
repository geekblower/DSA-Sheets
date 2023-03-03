/*
  Platform : Leetcode
  Problem : https://leetcode.com/problems/divide-two-integers/
*/

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        return dividend / divisor;
    }
};
