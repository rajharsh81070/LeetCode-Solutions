class Solution
{
public:
  int singleNonDuplicate(vector<int> &nums)
  {
    int N = nums.size();
    int left = 0, right = N - 1;
    while (left < right)
    {
      int mid = left + (right - left) / 2;
      if (mid & 1)
      {
        if (nums[mid] == nums[mid - 1])
          left = mid + 1;
        else
          right = mid - 1;
      }
      else
      {
        if (nums[mid] == nums[mid + 1])
          left = mid + 2;
        else
          right = mid;
      }
    }
    return nums[left];
  }
};