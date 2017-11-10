
#include<iostream>
#include<iomanip>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<utility>
#include<limits.h>
#include<functional>
#include<algorithm>


using namespace std;

int xx[8]={-1,-1,-1,0,0,1,1,1};
int yy[8]={-1,0,1,-1,1,-1,0,1};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;
string s;
bool usedmod;
lli mod=100000,n;
lli dp[500][500];

lli find(li l,li r){
lli fans,i,k,valid;

if(l>r) return 1;
if(dp[l][r]!=-1) return dp[l][r];

fans=0;
for(i=l+1;i<=r;i+=2){
    if( (s[l]=='{' && (s[i]=='}' || s[i]=='?') )) valid=1;
    else if( s[l]=='(' && (s[i]==')' || s[i]=='?')) valid=1;
    else if(s[l]=='[' &&  (s[i]==']' || s[i]=='?')) valid=1;
    else if(s[l]=='?' && ( s[i]=='}' || s[i]==')' || s[i]==']') ) valid=1;
    else if(s[l]=='?'  && s[i]=='?') valid=3;
    else valid=0;
    
    fans+=valid*find(l+1,i-1)*find(i+1,r);
    if(fans>mod){
        fans%=mod;
        usedmod=true;
    }
}

return dp[l][r]=fans;
}


int main()
{
//ios_base::sync_with_stdio(false);cin.tie(NULL);

while(cin>>n>>s){
    usedmod=false;
 memset(dp,-1,sizeof(dp));
    lli ans=find(0,n-1);
    if(!usedmod) 
      cout<<ans<<endl;
    else 
        printf("%05lld\n",ans);
//"If the original answer is 15, you must output 15; but if the original answer is 100015, you must output 00015!!!"

}

return 0;
}
