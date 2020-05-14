int Solution::trailingZeroes(int A) {
      int C=0;
        while(A>0)
        {
            A=A/5;
            C=C+A;
        }
        
        return C;
        
        
}
