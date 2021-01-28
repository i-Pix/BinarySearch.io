int solve(int n) {
    int sum = 0;
 for(int i = 1; i<=2*n; i+=2){
     sum += i;
 }   
 return sum;
}
/*
int solve(int n) {
    return n * n;
}
*/
