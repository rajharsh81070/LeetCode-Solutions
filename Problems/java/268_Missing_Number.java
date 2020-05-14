/*
Question Link :- https://leetcode.com/problems/missing-number/
*/

class Solution {
  public int missingNumber(final int[] nums) {
    final int N = nums.length;
    long sum = N * (N + 1) / 2;
    for (int i = 0; i < N; i++)
      sum -= nums[i];
    return (int) sum;
  }
}