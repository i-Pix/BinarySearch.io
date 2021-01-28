bool solve(string s) {
  int i = 0;
  int f = 1;
  int j = s.length()-1;
  while(i<j){
      if(s[i]==s[j]){

          i++;
          j--;
          continue;
      }
      else{
      f=0;
      break;}
  }
  if(f)
  return true;
  else
  return false; 
}
