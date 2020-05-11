/*
Question Link :- https://leetcode.com/problems/number-complement/
*/

class Solution
{
public:
    int findComplement(int num)
    {
        int res = 0, i = 0;
        while (num)
        {
            res += (!(num % 2)) << i++;
            num >>= 1;
        }
        return i ? res : 1;
    }
};