int Solution::titleToNumber(string A) {
    int x=0,sum=0;
    for(int i=A.size()-1;i>=0;i--)
      {
          sum+= (A[i]-'A'+1)*pow(26,x);
           x++;
      }
    return sum;
}
