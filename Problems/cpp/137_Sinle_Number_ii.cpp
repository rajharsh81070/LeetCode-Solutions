/*
Question Link:- https://leetcode.com/problems/single-number-ii/
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int N = nums.size();
        vector<int> bits_pos(64, 0), bits_neg(64, 0);
        for(int i=0; i<N; i++) {
            int pos = 0;
            long long val = nums[i];
            if(val > 0) {
                while(val > 0) {
                    if(val&1)
                        bits_pos[pos]++;
                    val>>=1;
                    bits_pos[pos]%=3;
                    pos++;
                }
            }
            else {
                val = -val;
                while(val > 0) {
                    if(val&1)
                        bits_neg[pos]++;
                    val>>=1;
                    bits_neg[pos]%=3;
                    pos++;
                }  
            }
        }
        long long Ans = 0;
        if(accumulate(bits_neg.begin(), bits_neg.end(), 0)) {
            for(int i=0; i<32; i++) {
                if(bits_neg[i])
                    Ans += pow(2, i);
            }
            return -Ans;
        }
        for(int i=0; i<32; i++) {
                if(bits_pos[i])
                    Ans += pow(2, i);
            }
        return Ans;
    }
};