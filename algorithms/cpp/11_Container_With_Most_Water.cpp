class Solution {
public:
    int maxArea(vector<int>& height) {
        int N = height.size();
        int Ans = 0;
        int i=0, j=N-1;
        while(i < j) {
            Ans = max(Ans, (j-i)*min(height[i], height[j]));
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return Ans;
    }
};