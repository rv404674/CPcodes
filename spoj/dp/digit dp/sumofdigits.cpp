#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>

using namespace std;
typedef long long lli;
lli dp[20][200][2];//dp[max digits in long long int][max sum=18*9~200][tight]

lli prime(lli n){
if(n==1) return 0;
if(n==2) return 1;
if(n%2==0) return 0;

for(lli i=3;i*i<=n;i+=2)
    if(n%i==0) return 0;
return 1;

}

string tostring(lli n){
    string x;
    while(n){
        x+=(n%10)+'0';
        n/=10;
    }
    reverse(x.begin(),x.end());
    return x;
}

lli dpsolve(string &s,lli idx,lli sum,lli tight){
if(idx==s.size())
      { if (prime(sum)) return 1;
          return 0;
      }

if(dp[idx][sum][tight]!=-1 ) return dp[idx][sum][tight];

lli k,i,newtight;
k=(tight)?(s[idx]-'0'):9;
lli total=0;

for(i=0;i<=k;i++)
{
    if(i<(s[idx]-'0')) newtight=0;
    else newtight=tight;
    total+=dpsolve(s,idx+1,sum+i,newtight);
}
dp[idx][sum][tight]=total;

return total;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli t,a,b,ans1,ans2;

    string s1,s2;
cin>>t;
    while(t--){
cin>>a>>b;
        memset(dp,-1,sizeof(dp));
        s1=tostring(a-1);
        ans1=dpsolve(s1,0,0,1);
        
       memset(dp,-1,sizeof(dp));
      s2=tostring(b);
     ans2=dpsolve(s2,0,0,1);

    cout<<ans2-ans1<<endl;
    }
   return 0;
} 
        

