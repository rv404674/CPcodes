
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
string s[4]={"up","right","left","down"};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define DEBUGXY(x,y)    cout<<#x<<":"<<x<<" "<<#y<<":"<<y<<endl; 
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;


char a[1001][1001];
int visited[1001][1001];
int flag,m,n,destx,desty,srcx,srcy;
string ans;

void dfs(int i,int j,string dir,int cnt,string prevdir){

  //  DEBUG(i)
//DEBUG(j)
//cout<<endl;

    visited[i][j]=1;
if(prevdir!=dir) {cnt+=1;}

if(i==destx && j==desty){
  //  cout<<"FINAL "<<cnt<<endl;
    if(cnt<=2) ans="YES";
    visited[i][j]=0;
    return ;}

int k,x,y;
for( k=0;k<4;k++){
    x=i+dx[k];y=j+dy[k];
    if(visited[x][y] || a[x][y]=='*') continue;
    if(x<0 || x>=m || y<0 || y>=n) continue;
   

    if(i==srcx && j==srcy) {dfs(x,y,s[k],cnt,s[k]);}
    else   dfs(x,y,s[k],cnt,dir);
}
visited[i][j]=0;
//cout<<"visited[i][j]=0 "<<i<<" "<<j<<endl;
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
ans="NO";

flag=1;
memset(visited,0,sizeof(visited[0][0]*1001*1001));
cin>>m>>n;
for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {cin>>a[i][j];
        if(a[i][j]=='S') {srcx=i,srcy=j;}
        else if(a[i][j]=='T') {destx=i;desty=j;}
    }

dfs(srcx,srcy,"",0,"");
cout<<ans<<endl;
return 0;
}



























