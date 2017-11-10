
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li r,c,sum,i,j,x,y,k,u1,u2,v1,v2,t;

while(1){

cin>>c>>r;
if(!c && !r) break;

char a[r][c];
for(i=sum=0;i<r;i++)
    for(j=0;j<c;j++)
    {cin>>a[i][j];
        if(a[i][j]=='o'){u1=i;u2=j;}
    }

queue< pair<int,int>> q;
li dist[r+100][c+100]={0};
int visit[r+100][c+100]={0};
dist[u1][u2]=0;
visit[u1][u2]=1;
q.push(make_pair(u1,u2));

li prevx=0,prevy=0;
while(!q.empty()){
    pair<li,li> p=q.front();
    q.pop();

    for(k=0;k<4;k++){
        x=p.first+dx[k];
        y=p.second+yy[k];

if(x<0 || x>r || y<0 || y>c || visit[x][y]) continue;
if(a[x][y]=='x') continue;

dist[x][y]=dist[p.first][p.second]+1;
if(a[x][y]=='*'){
    sum+=dist[x][y]-dist[prevx][prevy];
    prevx=x,prevy=y;
}

q.push(make_pair(x,y));
visit[x][y]=1;
}

}

li flag=1;
for(i=0;i<r;i++)
    for(j=0;j<c;j++)
   if(a[i][j]=='*') 
    if(!visit[i][j]) {flag=0;}

    flag==1?cout<<sum<<endl:cout<<-1<<endl;
    }

return 0;
}
