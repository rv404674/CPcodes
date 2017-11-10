#include <bits/stdc++.h>
using namespace std;
const long long int mod=1e9+9;
int main()
{  
     long long int dp[10000001];
     long long int i=0;
     dp[1]=1;
     dp[2]=10;
     for(i=3;i<=10000000;i++)
       dp[i]=(dp[i-2]+4*i*i-6*(i-1))%mod;
     int t;
     scanf("%d",&t);
     while(t--)
     {
         int n;
         scanf("%d",&n);
         printf("%lld\n",dp[n]);
     }
     
    
    return 0;
}