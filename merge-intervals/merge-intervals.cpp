class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int lenOfIntervals = intervals.size();
        if(lenOfIntervals <= 1) {
            return intervals;
        }
        vector<vector<int>> finalIntervals;
        sort(begin(intervals), end(intervals));
        int i = 0;
        while(i < lenOfIntervals) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            int j = i+1;
            while(j < lenOfIntervals && intervals[j][0]<=end) {
                end = max(end, intervals[j][1]);
                j++;
            }
            i = j;
            finalIntervals.push_back({start, end});
        }
        return finalIntervals;
    }
};