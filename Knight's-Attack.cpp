bool solve(vector<vector<int>>& matrix) {
    vector<pair<int,int>> v;
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size();j++){
           if(matrix[i][j])
           v.push_back({i,j});
        }
    }
     for(int i = 0; i<v.size(); i++){
         int x2 = v[i].first;
         int y2 = v[i].second;
        for(int j = i+1; j<v.size();j++){
         int x1 = v[j].first;
         int y1 = v[j].second; 
         if((abs(y1-y2)+abs(x1-x2)==3) && x1!=x2 && y1!=y2){
             return true;
         }      
        }
     }
        return 0;
}
