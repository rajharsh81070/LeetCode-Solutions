class Solution
{
public:
  int kadane(vector<int> &A)
  {
    int len = A.size();
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < len; i++)
    {
      curr_sum += A[i];
      max_sum = max(max_sum, curr_sum);
      // cout << max_sum << " ";
      if (curr_sum < 0)
        curr_sum = 0;
    }
    return max_sum;
  }

  int maxSubarraySumCircular(vector<int> &A)
  {
    int N = A.size();
    int max_kadane = kadane(A);
    int wrap_sum = 0;
    for (int i = 0; i < N; i++)
    {
      wrap_sum += A[i];
      A[i] = -A[i];
    }
    if (wrap_sum == -kadane(A))
      return max_kadane;
    wrap_sum = wrap_sum + kadane(A);
    return max(wrap_sum, max_kadane);
  }
};