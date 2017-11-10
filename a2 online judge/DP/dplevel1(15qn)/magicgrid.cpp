
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

li dp[600][600],a[600][600];
li ans,n,m;

int possible(li x){
    dp[1][1]=x;
    a[1][1]=x;

li i,j;
for(i=2;i<=m;i++)
{
    dp[1][i]=dp[1][i-1]+a[1][i];
    if(dp[1][i]<=0) dp[1][i]=MIN;
}

for(i=2;i<=n;i++){
    dp[i][1]=dp[i-1][1]+a[i][1];
    if(dp[i][1]<=0) dp[i][1]=MIN;
}

for(i=2;i<=n;i++)
for(j=2;j<=m;j++)
{
    dp[i][j]=max(dp[i-1][j],dp[i][j-1])+a[i][j];
    if(dp[i][j]<=0) dp[i][j]=MIN;
}

return dp[n][m]>0;
}



void bsearch(li l,li h){
    li mid;
    if(l>h) return ;
    mid=(l+h)/2;
    if(possible(mid)){
        ans=min(ans,mid);
        bsearch(l,mid-1);
    }
    else bsearch(mid+1,h);
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li i,j,sum,t;

cin>>t;
while(t--){

sum=0;
cin>>n>>m;

ans=MAX;
for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    {cin>>a[i][j];sum+=abs(a[i][j]);}

bsearch(1,sum);

if(ans!=MAX)
cout<<ans<<endl;
else cout<<-1<<endl;
}

return 0;
}




























