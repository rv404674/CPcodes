//http://stackoverflow.com/questions/5151483/how-to-find-the-number-of-distinct-subsequences-of-a-string
#include<iostream>
#include<string.h>
#define mod 1000000007

typedef long long int lli;
using namespace std;

int  main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;
   int t,i;
   cin>>t;
   while(t--){
       cin>>s;
       int last[100];//all letters are in capital;so max value will be of cap Z
       memset(last,0,sizeof(last));
       lli dp[s.size()+1];

       dp[0]=1;
       for(i=1;i<=s.size();i++){
           dp[i]=dp[i-1]*2;
           if(dp[i]>=mod) dp[i]=dp[i]%mod;

           //in the above step if dp[i]=0 then subtracting something from it can make it negative
         if(last[s[i-1]]!=0) {dp[i]=  dp[i]-dp[ last[s[i-1]]-1 ]+mod;dp[i]=dp[i]%mod;}
         last[s[i-1]]=i;
       }
       cout<<dp[s.size()]<<endl;
   }
   return 0;
}
