class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<N; i++)
            mp[nums[i]] = i;
        int f_i, f_j;
        for(int i=0; i<N; i++) {
            if(mp.find(target-nums[i])!=mp.end() && mp[target-nums[i]]!=i) {
                f_i = i, f_j = mp[target-nums[i]];
                break;
            }
        }
        return {f_i, f_j};
    }
};