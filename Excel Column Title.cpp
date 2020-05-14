string Solution::convertToTitle(int A) {
    
  string map="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     string ans;
     while(A!=0)
       {
           A=A-1;
           int rem=A%26;
           ans=map[rem]+ans;
           A/=26;
       }
   return ans;
}
