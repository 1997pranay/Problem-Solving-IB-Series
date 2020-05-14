public class Solution {
    public String[] fizzBuzz(int A) {
          String a[]=new String[A];
        for(int i=0;i<A;i++)
        {  
            if((i+1)%3==0&&(i+1)%5==0)
              {  
                  a[i]="FizzBuzz";
              }
              else if((i+1)%3==0)
               {
                   a[i]="Fizz";
               }
            else if((i+1)%5==0)
                {
                    a[i]="Buzz";
                }
             else
               {
                   a[i]=i+1+"";
               }
            
            
        }
        return a;
        
        
        
    }
}
