/*
Question Link:- https://leetcode.com/problems/majority-element/
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N = nums.size();
        int maj_ele_index, count = 0;
        for(int i=0; i<N; i++) {
            if(count==0) {
                maj_ele_index = i;
                count = 1;
            }
            else {
                if(nums[i]==nums[maj_ele_index])
                    count++;
                else
                    count--;
            }
        }
        return nums[maj_ele_index];
    }
};