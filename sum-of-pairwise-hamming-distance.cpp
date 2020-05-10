


int Solution::hammingDistance(const vector<int> &A) {
    
    vector<int> binary_array(32,0); int n=A.size();int sum=0;int mod=1000000007;
    for(int i=0;i<A.size();i++)
    {
        int index=0;
         int num=A[i];
         while(num>0)
         {
             binary_array[index]+=(num&1);
             index++;
             num>>=1;
         }
    }
    for(int i=0;i<32;i++)
      {
         int ans= (2LL*binary_array[i]*(n-binary_array[i]))%mod;
         sum=(sum+ans)%mod;
      }
      
    return sum;
}
