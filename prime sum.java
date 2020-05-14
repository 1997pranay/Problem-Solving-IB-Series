import java.util.*;
public class Solution {
    public int[] primesum(int A) {
        
        
        boolean a[]=new boolean[A+1];
           for(int i=0;i<=A;i++)
             {a[i]=true;}
        
        for(int p=2;p*p<=A;p++)
           {
               if(a[p]==true)
                 {
                     for(int i=p*p;i<=A;i+=p)
                        {
                            a[i]=false;
                 }
                     
                 }
           }
           
           int arr[]=new int[2];
           List<Integer> list=new ArrayList<>();
        for(int i=2;i<=A;i++)
           {
               if(a[i]==true)
                    {
                       list.add(i);
                    }
           }
        int ar1[]=new int[list.size()];int k=0;
        for(Integer i : list)
           {
               ar1[k++]=i;
           }
           int left=0,right=ar1.length-1;
           while(left<=right)
             {
                  int sum=ar1[left]+ar1[right];
                  if(sum<A)
                    {
                        left=left+1;
                    }
                 else if(sum>A)
                    {
                        right=right-1;
                    }
                    else{
                        arr[0]=ar1[left];
                        arr[1]=ar1[right];
                        break;
                    }
             }
          return arr;
    }
}
