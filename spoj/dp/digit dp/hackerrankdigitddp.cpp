//no of integers in range [L..R] such that their sum is divisible by k
#include<iostream>
#include<string.h>
#include<algorithm>
#include<string>

using namespace std;
typedef long long lli;
lli N;

lli dp[20][2][100];//dp[n][max sum][tight];

string tostring(lli a){
    string x;
    while(a){
        x+=(a%10)+'0';
        a/=10;
    }
    reverse(x.begin(),x.end());
    return x;
}

lli dpsolve(string &s,lli idx,lli tight,lli rem){
    if(idx==s.size()){
        if(rem==0) return 1;
         return 0;
    }
    if(dp[idx][tight][rem]!=-1) return dp[idx][tight][rem];

    lli k=(tight==1)?( s[idx]-'0'):9;
    lli cnt=0;
    lli newtight;

    for(lli i=0;i<=k;i++){
        if(i< (s[idx]-'0') ) newtight=0;
        else newtight=tight;
  cnt+=dpsolve(s,idx+1,newtight,(rem+i)%N);
    }

    dp[idx][tight][rem]=cnt;
    return cnt;
}




int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli a,b;

    cin>>a>>b>>N;
    string s1,s2;

    memset(dp,-1,sizeof(dp));
    s1=tostring(a-1);
    lli ans1=dpsolve(s1,0,1,0);

    s2=tostring(b);
    memset(dp,-1,sizeof(dp));
    lli ans2=dpsolve(s2,0,1,0);
    cout<<ans2-ans1<<endl;
return 0;

}
