/*
Question Link:- https://leetcode.com/problems/majority-element-ii/ 
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int N = nums.size();
        int first_ele, second_ele;
        int count1 = 0, count2 = 0;
        for(int i=0; i<N; i++) {
            if(first_ele==nums[i]) {
                count1++;
            }
            else if(second_ele==nums[i]) {
                count2++;
            }
            else if(count1==0) {
                first_ele = nums[i];
                count1 = 1;
            }
            else if(count2==0) {
                second_ele = nums[i];
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }
        count1 = count2 = 0;
        for(int i=0; i<N; i++) {
            if(first_ele==nums[i])
                count1++;
            else if(second_ele==nums[i])
                count2++;
        }
        vector<int> Ans;
        if(count1 > N/3)
            Ans.push_back(first_ele);
        if(count2 > N/3)
            Ans.push_back(second_ele);
        return Ans;
    }
};