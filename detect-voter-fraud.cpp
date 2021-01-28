bool solve(vector<vector<int>>& votes) {
    int n = votes.size();
    int hash[n] = {0};
    for(int i = 0; i<n; i++){
        hash[votes[i][1]%n]++;
    }
    for(int i = 0; i<n; i++){
        if(hash[i]>1)
        return true;
    }
    return false;
}
