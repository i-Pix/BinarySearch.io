bool solve(int n) {
   if(n>=7 && (n-7)%3==0)
   return true;
   else if(n>=14 && (n-14)%3==0)
   return true;
   else if (n%3 == 0)
   return true;
   else
   return false;
}
