
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

int visited[1001][1001];
int color[1001][1001],m,clr,ans,n;
string a[1001];


void dfs(int i,int j){
ans++;
color[i][j]=clr;

int k,x,y;
for( k=0;k<4;k++){
    x=i+dx[k];y=j+dy[k];
    if(x<0 || x>=m || y<0 || y>=n) continue;
    if(!color[x][y] && a[x][y]=='.')
        dfs(x,y);
}
}




int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
cin>>m>>n;
int i,j,x,y;
for(i=0;i<m;i++) cin>>a[i];

int f[1000005],visited[1000005];
memset(color,0,sizeof(color[0][0]*1001*1001));
memset(visited,0,sizeof(visited));

clr=0;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
        if(a[i][j]=='.' && !color[i][j]){
            ans=0;
        clr++;
      dfs(i,j);
    f[clr]=ans;  
        }
}

int T=0;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
        if(a[i][j]=='.') cout<<".";
        else{
            T++;
            int fnl=0;
            for(int k=0;k<4;k++){
                x=i+dx[k];
                y=j+dy[k];
                if(x<0 || x>=m || y<0 || y>=n) continue;
                if(a[x][y]=='.'){
                    if(visited[color[x][y]]!=T)
                        fnl+=f[color[x][y]];
                        visited[color[x][y]]=T;
                    }
                }
            
            cout<<(fnl+1)%10;
        }
    cout<<endl;
}
return 0;
}
