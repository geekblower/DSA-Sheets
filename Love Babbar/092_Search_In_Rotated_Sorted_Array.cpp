/*
  Platform : Leetcode
  Problem : https://leetcode.com/problems/search-in-rotated-sorted-array/
*/

class Solution {
public:
    int pivotElement(vector<int> nums) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = 0;

        while(start < end) {
            int mid = start + (end - start) / 2;

            if(nums[mid] >= nums[0]) {
                ans = mid;
                start = mid + 1;
            } else { 
                end = mid;
            }
        }

        return ans;
    }

    int searchElement(vector<int> nums, int start, int end, int target) {
        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                return mid;
            }
            
            if(nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return -1;
    }

    int search(vector<int> &nums, int target) {
        int pivot = pivotElement(nums);
        int n = nums.size();

        if(target >= nums[0] && target <= nums[pivot]) {
            return searchElement(nums, 0, pivot, target);
        } else {
            return searchElement(nums ,pivot+1, n-1, target );
        }
    }
};
