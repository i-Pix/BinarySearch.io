vector<int> solve(vector<vector<int>>& intervals) {
     int left_side = intervals[0][0], right_side = intervals[0][1], size = intervals.size();
    for (int i = 1; i < size; i++) {
        left_side = max(left_side, intervals[i][0]);
        right_side = min(right_side, intervals[i][1]);
    }
    vector<int> final{left_side, right_side};
    return final;
}
