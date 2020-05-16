#define mod 1000003
long long power(long long x,long long y)
 {
      long long res=1;
     while(y>0)
      {
          if(y&1)
           res=(res*x)%mod;
          
          y>>=1;
          x=(x*x)%mod;
      }
     return res;
 }
int Solution::findRank(string A) {
     long long int fact[A.size()+1];
   fact[0]=1;
   for(int i=1;i<=A.size();i++)
     {
         fact[i]=(fact[i-1]*i)%mod;
     }
     int ans=0;
     for(int i=0;i<A.size();i++)
       {  int count=0;
           for(int j=i+1;j<A.size();j++)
              {
                  if(A[j]<A[i])
                   count++;
              }
              map<char,int> m;
              for(int k=i;k<A.size();k++)
                 m[A[k]]++;
                 long long d=1;
              for(auto a:m)
               {
                   d=(d*(fact[a.second]))%mod;
               }
              ans=(ans+((count%mod)*(fact[A.size()-i-1]%mod)*(power(d,mod-2)%mod))%mod)%mod;
       }
    return (ans+1)%mod;
}
