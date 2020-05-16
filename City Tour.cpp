#define mod 1000000007
long long power(long long y,long long x)
{     ;long long res=1;
    while(x>0)
    {
        if(x&1)
         res=(res*y)%mod;
        
        y=(y*y)%mod;
        x>>=1;
    }
    return res%mod;
}
int Solution::solve(int A, vector<int> &B) {
long long fact[1001];vector<int> v;long long ans=1,prod=1;int total=A-B.size();
 fact[0]=1;  sort(B.begin(),B.end());
for(int i=1;i<=1000;i++)
  {
      fact[i]=(fact[i-1]*i)%mod;
  }
  v.push_back(B[0]-1);
    for(int i=1;i<B.size();i++)
       {
           v.push_back(B[i]-B[i-1]-1);
       }
     v.push_back(A-B[B.size()-1]);
  for(int i=0;i<v.size();i++)
    {      if(v[i]==0)continue;
     prod=(prod*fact[v[i]])%mod;
    }
    for(int i=1;i<v.size()-1;i++)
     {        if(v[i]==0)continue;
         {ans=(ans*power(2,v[i]-1))%mod;}
     }
   ans=(ans*fact[total])%mod;
   ans=(ans*power(prod,mod-2))%mod;
   ans=ans%mod;
   return (int)ans;
}
