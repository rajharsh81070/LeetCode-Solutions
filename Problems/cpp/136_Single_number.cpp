/*
Question Link:- https://leetcode.com/problems/single-number/
*/


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int N = nums.size();
        int Ans = 0;        
        for(int i=0; i<N; i++) {
            Ans ^= nums[i];
        }
        return Ans;
    }
};