
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
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int n,m,q,mx,i,j,x,y;

cin>>n>>m>>q;

int a[n+1][m+1];
for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
        cin>>a[i][j];

while(q--){
    cin>>x>>y;
    if(a[x][y]) a[x][y]=0;
    else a[x][y]=1;

    mx=0;
int total=0;

    for(i=1;i<=n;i++)
    {
        mx=x=0;
        for(j=1;j<=m;j++)
        {    if(a[i][j]==1) x++;
        else x=0;
      mx=max(mx,x);
    }
        total=max(mx,total);
    }
    cout<<total<<endl;
}












return 0;
}
