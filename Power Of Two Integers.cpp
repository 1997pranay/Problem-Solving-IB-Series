int Solution::isPower(int A) {
    
        if(A==1)return 1;
      for(int i=2;i*i<=A;i++)
         {
              int j=2;
              int power=pow(i,j);
             while(power<=A && power>0)
               {
                   if(power==A)
                     {return true;}
                   j++;
                   power=pow(i,j);
               }
         }
      return false;
}
