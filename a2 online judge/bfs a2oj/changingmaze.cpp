
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
int dx[5]={-1,1,0,0,0};
int dy[5]={0,0,-1,1,0};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;
typedef pair< int,pair<int,int> > pii;

int r,c,n;
char grid[50][50][50];

int bfs(){

    if(r-1==0 && c-1==0) return -1;
int u,k,x,y,p1,p2,v;
int dist[50][50][50]={0};

    queue< pii> q;
    grid[0][0][0]='1';
    dist[0][0][0]=0;
    q.push(make_pair(0,make_pair(0,0)));

    while(!q.empty()){
        pii p=q.front();
        p1=p.first;
        u=p.second.first;
        v=p.second.second;
q.pop();

            p2=(p1+1)%n;
        for(k=0;k<5;k++){
            x=u+dx[k];
            y=v+dy[k];

            if(x<0 || x>=r || y<0 || y>=c) continue;
            if(grid[p2][x][y]=='0'){
                grid[p2][x][y]='1';
                dist[p2][x][y]=dist[p1][u][v]+1;
                if(x==r-1 && y==c-1) {return dist[p2][x][y];}
                q.push(make_pair(p2,make_pair(x,y)));
            }
        }
    }
    return -1;
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int t,i,j,k;

t=1;
while(1){

cin>>r>>c>>n;
    if(!r && !c && !n) break;

    for(i=0;i<n;i++)
     for(j=0;j<r;j++)
        for(k=0;k<c;k++)
        cin>>grid[i][j][k];

int ans=bfs();
    if(ans!=-1) cout<<"Case "<<t++<<": Luke and Leia  can escape in "<<ans<<" steps.\n";
    else cout<<"Case "<<t++<<": Luke and Leia cannot escape.\n";
}
return 0;
}
