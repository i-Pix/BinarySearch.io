int solve(int n) {
  // 1 2 6 24 120 720 
    int factorial = 1;
  for(int i = 1; i <= n; i++){
     factorial = i*factorial;
      
  }  
  return factorial;
}
