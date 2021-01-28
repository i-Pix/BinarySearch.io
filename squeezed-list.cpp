vector<vector<int>> solve(vector<int>& nums) {
    
    vector<vector<int>> ans; 
    vector<int> temp;
    ans.push_back(nums);
    while(nums.size()!=1){
        temp.clear();
        int len = nums.size();
        
        if (len <= 3) {
            if (len == 2) {
                temp.push_back(nums[0] + nums[1]);
                ans.push_back(temp);
            } else if (len == 3) {
                temp.push_back(nums[0] + nums[1] + nums[2]);
                ans.push_back(temp);
            }
            break;
        }
        int f = nums[0]+nums[1];
        temp.push_back(f);
        for(int i = 2; i<len-2; i++){
            temp.push_back(nums[i]);
        }
        int l = nums[len - 1]+nums[len - 2];
        temp.push_back(l);
        nums = temp;
        ans.push_back(nums);
        
    }
    return ans;
}
