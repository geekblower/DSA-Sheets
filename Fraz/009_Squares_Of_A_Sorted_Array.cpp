/*
  Platform : Leetcode
  Problem : https://leetcode.com/problems/squares-of-a-sorted-array/
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> solution(nums.size(), -1);

        for(int i=0; i<nums.size(); i++) {
            solution[i] = nums[i] * nums[i];
        }

        sort(solution.begin(), solution.end());

        return solution;
    }
};
