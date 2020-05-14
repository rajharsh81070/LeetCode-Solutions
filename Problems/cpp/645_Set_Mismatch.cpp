/*
Question Link :- https://leetcode.com/problems/set-mismatch/
*/

class Solution
{
public:
  vector<int> findErrorNums(vector<int> &nums)
  {
    int N = nums.size();
    long long A = N * 1LL * (N + 1LL) / 2LL;
    long long B = 0;
    for (int i = 0; i < N; i++)
      B += nums[i];
    long long diff1 = B - A;
    long long C = N * (N + 1LL) * (2LL * N + 1LL) / 6LL;
    long long D = 0;
    for (int i = 0; i < N; i++)
      D += nums[i] * 1LL * nums[i];
    long long diff2 = (D - C) / diff1;
    int Ans1 = (diff2 + diff1) / 2;
    int Ans2 = (diff2 - diff1) / 2;
    return {Ans1, Ans2};
  }
};