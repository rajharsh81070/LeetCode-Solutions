/*
Question Link:- https://leetcode.com/problems/first-missing-positive/
*/ 

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int N = nums.size();
        for(int i=0; i<N; i++) {
            if(nums[i]>=1 && nums[i]<=N) {
                if(nums[i]!=(i+1) && nums[nums[i]-1]!=nums[i]) {
                    swap(nums[i], nums[nums[i]-1]);
                    i--;
                }
            }
        }
        int Ans = 0;
        for(int i=0; i<N; i++) {
            if(nums[i]!=(i+1)) {
                Ans = i+1;
                break;
            }
        }
        if(Ans==0)
            return N+1;
        return Ans;
    }
};