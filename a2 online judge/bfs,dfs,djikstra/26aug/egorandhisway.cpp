
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

int srcx,srcy,destx,desty;
int a[1005][1005];
int visit[1005][1005][4][3];
int m,n;
//4 in visit indicates the four direction and 3(i.e max 2) indicates number of turns

void dfs(int x,int y,int d,int p){
int x1,y1,p1,i;
visit[x][y][d][p]=1;
for(i=0;i<4;i++){
if(p==2 && i!=d) continue;
//dry run

    x1=x+dx[i];
    y1=y+dy[i];
    p1=(i==d)?p:p+1;

    if(x1<1 || x1>m || y1<1 || y1>n || visit[x1][y1][i][p1] || a[x1][y1]) continue;
    dfs(x1,y1,i,p1);
}
}




int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,j;
cin>>m>>n;
char b[1010][1010];

memset(visit,0,sizeof(visit));

for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
    {cin>>b[i][j];
        if(b[i][j]=='*') a[i][j]=1; 
        else a[i][j]=0;

         if(b[i][j]=='S') {srcx=i;srcy=j;}
         if(b[i][j]=='T') {destx=i;desty=j;}
    }

for(i=0;i<4;i++) dfs(srcx,srcy,i,0);
for(i=0;i<4;i++)
    for(j=0;j<3;j++)
        if(visit[destx][desty][i][j])
        {cout<<"YES";return 0;}

cout<<"NO";
return 0;
}





























