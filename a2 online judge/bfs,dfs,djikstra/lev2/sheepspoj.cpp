
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
typedef pair<int,int> pii;


int totalv,totals,r,c;
char a[500][500];
int visit[500][500];

void bfs(int i,int j){
    int x,y,u,v;
    visit[i][j]=1;
    queue <pii> q;
   q.push(make_pair(i,j));
int nv=0,ns=0;

while(!q.empty()){
    pii p=q.front();
    q.pop();

    u=p.first;v=p.second;
    if(a[u][v]=='v') nv++;
    else if(a[u][v]=='k') ns++;

    for(int k=0;k<4;k++){
            x=u+dx[k];
            y=v+dy[k];

            if(visit[x][y] || x<0 || x>r || y<0 || y>c || a[x][y]=='#') continue;
           q.push(make_pair(x,y));
          visit[x][y]=1;
    }
}

if(ns>nv) totalv-=nv;
else totals-=ns;
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int t,i,j;

    cin>>r>>c;
    for(i=totalv=totals=0;i<r;i++)
        for(j=0;j<c;j++)
        {cin>>a[i][j];
         if(a[i][j]=='v') totalv++;
         else if(a[i][j]=='k') totals++;
        }

    memset(visit,0,sizeof(visit));
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(!visit[i][j] && a[i][j]!='#')
                bfs(i,j);

    cout<<totals<<" "<<totalv;
return 0;
}
