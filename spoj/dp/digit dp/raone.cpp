//no of integers in range [L..R] such that their sum is divisible by k
#include<iostream>
#include<string.h>
#include<algorithm>
#include<string>

using namespace std;
typedef long long lli;
lli N;

lli dp[20][2][200][200];//dp[n][max sum][tight];

string tostring(lli a){
    string x;
    while(a){
        x+=(a%10)+'0';
        a/=10;
    }
    reverse(x.begin(),x.end());
    return x;
}

lli dpsolve(string &s,lli idx,lli tight,lli even,lli odd){
    if(idx==s.size()){
        if( (even-odd)==1) return 1;
         return 0;
    }
    if( dp[idx][tight][even][odd]!=-1) return dp[idx][tight][even][odd];

    lli k=(tight==1)?( s[idx]-'0'):9;
    lli cnt=0;
    lli newtight;

    for(lli i=0;i<=k;i++){
        if(i< (s[idx]-'0') ) newtight=0;
        else newtight=tight;

        if(idx%2==0) 
            cnt+=dpsolve(s,idx+1,newtight,even+i,odd);
        else 
            cnt+=dpsolve(s,idx+1,newtight,even,odd+i);

    }

    dp[idx][tight][even][odd]=cnt;
    return cnt;
}




int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli a,b,t;
cin>>t;
    while(t--){
    cin>>a>>b;
    string s1,s2;

    memset(dp,-1,sizeof(dp));
    s1=tostring(a-1);
    lli ans1=dpsolve(s1,0,1,0,0);

    s2=tostring(b);
    memset(dp,-1,sizeof(dp));
    lli ans2=dpsolve(s2,0,1,0,0);
    cout<<ans2-ans1<<endl;
    }

return 0;

}

