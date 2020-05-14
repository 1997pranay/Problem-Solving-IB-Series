#define mod 1000003
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
              ans=(ans+(count*fact[A.size()-i-1])%mod)%mod;
       }
    return (ans+1)%mod;
    
}
