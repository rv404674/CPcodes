
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

char a[105][105];
int r,c,srcx,srcy,destx,desty;

int isvalid(int x,int y){
    return (x>=0 && x<r && y>=0 && y<c);
}

int bfs(){

    li x,y,k;
queue< pair<int,int> >q;
int dist[200][200]={0},visit[200][200]={0};

visit[srcx][srcy]=1;
dist[srcx][srcy]=-1;//understand logic
q.push(make_pair(srcx,srcy));

while(!q.empty()){
pair<int,int> p=q.front();
q.pop();

for(k=0;k<4;k++){
    x=dx[k]+p.first;
    y=dy[k]+p.second;
   
    while(isvalid(x,y) && a[x][y]!='*'){
        if(!visit[x][y]){
            dist[x][y]=1+dist[p.first][p.second];
            if(x==destx && y==desty) return dist[x][y];
            
            visit[x][y]=1;
            q.push(make_pair(x,y));
                    }

            x+=dx[k];y+=dy[k];
            }
    }
        }
//return dist[destx][desty];            
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
cin>>c>>r;
int i,j;
int flag=1;
for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        cin>>a[i][j];
        if(a[i][j]=='C'){
            if(flag) {
                srcx=i,srcy=j;
                flag=0;}

            else destx=i,desty=j;
        }
    }

cout<<bfs();
return 0;
}
