/*
Question Link :- https://leetcode.com/problems/valid-perfect-square/
*/

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
            return true;
        long long start = 1, end = num;
        while (start <= end)
        {
            long long mid = start + (end - start) / 2;
            // cout << mid << " ";
            if (mid * mid == (long long)num)
                return true;
            else if (mid * mid < (long long)num)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }
};