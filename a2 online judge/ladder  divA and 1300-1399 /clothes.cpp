
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
li i,j,k,n,m,mn,x,y;
mn=-1;

cin>>n>>m;
li a[n+1],match[101][101];
memset(match,0,sizeof(match));

for(i=1;i<=n;i++) cin>>a[i];
for(i=1;i<=m;i++) 
 {cin>>x>>y;
     match[x][y]=match[y][x]=1;}

for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++)
        for(k=j+1;k<=n;k++)
            if( match[i][j] && match[j][k] && match[i][k])
                if(mn==-1 || mn>(a[i]+a[j]+a[k]) )
                    mn=a[i]+a[j]+a[k];
cout<<mn;
return 0;
}
