/*
  Platform : Leetcode
  Problem : https://leetcode.com/problems/move-zeroes/
*/

class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int low = 0;
        int zero = 0;

        while(low < nums.size()) {
            if(nums[low] != 0) {
                swap(nums[zero++], nums[low]);
            }

            low++;
        }
    }
};
