int fib[31];
int solve(int n) {
    fib[0] =1;
    fib[1] = 1;
    for(int i = 2; i<30; i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    return fib[n-1];
}
