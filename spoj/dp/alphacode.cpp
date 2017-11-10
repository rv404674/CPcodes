#include<iostream>
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
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
long int dp[5001];
string s;
int i,n,t,x;

memset(dp,0,sizeof(dp));
dp[0]=dp[1]=1;


while(1){
    cin>>s;
    if(s=="0") break;

    n=s.size();
    
    for(i=2;i<=n;i++){
     
        x=(s[i-1]-'0')+(s[i-2]-'0')*10;
 
        if( (s[i]-'0')==0) dp[i]=dp[i-2];
        else  if(x>9 && x<=26) dp[i]=dp[i-1]+dp[i-2];
     else  dp[i]=dp[i-1];
    }
    cout<<dp[n]<<endl;
}


 return 0;
}

