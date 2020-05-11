/*
Question Link :- https://leetcode.com/problems/maximum-subarray/
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int tmpSum = 0;
        int N = nums.size();
        for(int i=0; i<N; i++) {
            tmpSum += nums[i];
            maxSum = max(maxSum, tmpSum);
            if(tmpSum < 0)
                tmpSum = 0;
        }
        return maxSum;
    }
};