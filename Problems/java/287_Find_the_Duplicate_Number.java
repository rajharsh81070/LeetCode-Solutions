/*
 * Question Link :- https://leetcode.com/problems/find-the-duplicate-number/
 */

class Solution {
  public int findDuplicate(int[] nums) {
    int N = nums.length;
    for (int i = 0; i < N; i++) {
      if (nums[Math.abs(nums[i]) - 1] < 0)
        return Math.abs(nums[i]);
      else
        nums[Math.abs(nums[i]) - 1] = -nums[Math.abs(nums[i]) - 1];
    }
    return 0;
  }
}