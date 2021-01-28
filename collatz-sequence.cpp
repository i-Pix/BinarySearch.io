int solve(int n) {
    int cnt = 0;
    while(1){
        if(n==1)
        return cnt;
        if(n%2==0){
        n = n/2;
        cnt++;
        // cout<<n<<endl;}
        }else
        {
            n = 3*n+1;
            cnt++;
            // cout<<n<<endl;
        }
    if(n==1)
    break;
    }
    cnt = cnt+1;
    return cnt;
}
