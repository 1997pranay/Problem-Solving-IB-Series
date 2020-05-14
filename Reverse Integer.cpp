public class Solution {
    
    public static long revers(int n)
{int d=0;long rev=0;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
    public int reverse(int A) {
        
        long  rev=revers(A);
       if(rev>Integer.MAX_VALUE||rev<Integer.MIN_VALUE)
       {return 0;
       }
       else
       { return (int)rev;}
        
    }
}
