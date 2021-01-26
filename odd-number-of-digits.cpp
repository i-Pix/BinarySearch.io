int solve(vector<int>& nums) {
    int cnt = 0;
    for(int i = 0; i< nums.size(); i++)
        {
            int digits = floor(log10(nums[i])+1);
            if(digits%2==1)
            cnt++;
        }
        return cnt;
}
