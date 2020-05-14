int Solution::isPalindrome(int A) {
     if(A<0)
       return false;
    int rev=0;int k=A;
      while(A!=0)
       {
           int d=A%10;
            rev=rev*10+d;
             A/=10;
       }
 return rev==k;
}
