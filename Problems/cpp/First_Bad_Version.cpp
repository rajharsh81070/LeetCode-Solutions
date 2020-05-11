/*
Question Link :- https://leetcode.com/problems/first-bad-version/
*/

class Solution
{
public:
    vector<int> Ans;
    int firstBadVersion(int n)
    {
        int start = 1;
        int end = n;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (isBadVersion(mid))
            {
                end = mid;
            }
            else
                start = mid + 1;
        }
        return start;
    }
};