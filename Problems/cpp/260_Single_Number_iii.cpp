/*
Question Link:- https://leetcode.com/problems/single-number-iii/ 
*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int N = nums.size();
        if(N==0)
            return {0, 0};
        int xo_r = nums[0];
        for(int i=1; i<N; i++) 
            xo_r ^= nums[i];
        int pos = 0;
        while(xo_r) {
            if(xo_r&1) 
                break;
            pos++;
            xo_r>>=1;
        }
        int Ans1 = 0, Ans2 = 0;
        for(int i=0; i<N; i++) {
            if(1<<pos & nums[i])
                Ans1 ^= nums[i];
            else
                Ans2 ^= nums[i];
        }
        return {Ans1, Ans2};
    }
};