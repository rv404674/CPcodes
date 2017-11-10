
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
int src,dst,cnt;
vector < pair<int,int> > adj[200];
int visit[200];

void dfs(int i,int clr){
pair<int,int > p;
int x,y;
visit[i]=1;
//cout<<cnt<<endl;
    if(i==dst){
    cnt++;
    return ;
}

for(auto itr=adj[i].begin();itr!=adj[i].end();itr++){
x=(*itr).first;
y=(*itr).second;

    //if(x==i) continue;
    if(!visit[x] && y==clr) dfs(x,clr);
    
}
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int v,e,x,y,w,i;
cin>>v>>e;

for(i=1;i<=e;i++)
{cin>>x>>y>>w;
    adj[x].push_back(make_pair(y,w));
   adj[y].push_back(make_pair(x,w));
}
int q;
cin>>q;
while(q--){
    cin>>src>>dst;
//    src--;dst--;
    cnt=0;
    for(i=1;i<=e;i++) {
        memset(visit,0,sizeof(visit));
        dfs(src,i);
}

    cout<<cnt<<endl;
}

return 0;
}
