
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
int n,m,req,cnt;
char a[600][600];
int visited[600][600]={0};

int isvalid(int x,int y){
    if(x>=0 && x<n && y>=0 && y<m) return 1;
    else return 0;
}

int dfs(int i,int j){
visited[i][j]=1;
cnt++;
if(cnt==req) return 1;
for(int k=0;k<4;k++)
{
    int x=i+dx[k];
    int y=j+dy[k];
    if(isvalid(x,y) && !visited[x][y] && a[x][y]=='.')
        if(dfs(x,y)) return 1;
}
return 0;
}





int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int k,x1,y1,i,j,e;
cin>>n>>m>>k;

for(i=e=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        cin>>a[i][j];
        if(a[i][j]=='.') {e++;x1=i;y1=j;}
    }
req=e-k;

cnt=0;
memset(visited,0,sizeof(visited[0][0]*n*m));
dfs(x1,y1);

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        if(a[i][j]=='#') cout<<'#';
    else if(!visited[i][j]) cout<<"X";
    else cout<<a[i][j];
cout<<endl;
}

return 0;

}
