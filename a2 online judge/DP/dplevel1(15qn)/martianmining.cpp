
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

li m,n,dp[600][600],yee[600][600],blog[600][600];

void solve(){
    li x,y,i,j;
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
    {
        x=yee[i][j];
        y=blog[i][j];
        if(i>=1)
                x+=dp[i-1][j];
       if(j>=1) y+=dp[i][j-1];
       dp[i][j]=max(x,y);
    }
}

cout<<dp[n-1][m-1]<<endl;
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li i,j,x;

while(1){
cin>>n>>m;
if(!n && !m) break;

for(i=0;i<n;i++)
    for(j=0;j<m;j++){
        cin>>x;
        if(j>=1)
            yee[i][j]=yee[i][j-1]+x;
        else yee[i][j]=x;
    }

for(i=0;i<n;i++)
    for(j=0;j<m;j++){
        cin>>x;
        if(i>=1)
            blog[i][j]=blog[i-1][j]+x;
        else blog[i][j]=x;
    }

solve();
}

return 0;
}




























