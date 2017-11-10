
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

lli cost[100055];
vector <li> adj[100055],adjrev[100055];
stack <li> s;
int visit[100005]={0};
lli curcost,cnt;


void dfs(li u){
visit[u]=1;
for(auto itr=adj[u].begin();itr!=adj[u].end();itr++)
    if(!visit[*itr])
        dfs(*itr);
s.push(u);

}

void dfsreverse(li u){
    visit[u]=1;
    if(cost[u]<curcost){
        curcost=cost[u];
        cnt=1;}
    else if(cost[u]==curcost) cnt++;

    for(auto itr=adjrev[u].begin();itr!=adjrev[u].end();itr++)
        if(!visit[*itr])
            dfsreverse(*itr);
}




int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li n,m,i,x,y;

cin>>n;
for(i=1;i<=n;i++) cin>>cost[i];
cin>>m;
while(m--){
    cin>>x>>y;
    adj[x].push_back(y);
    adjrev[y].push_back(x);
}

for(i=1;i<=n;i++) if(!visit[i]) dfs(i);
memset(visit,0,sizeof(visit));

lli res,ans;
ans=0;
res=1;
while(!s.empty()){
    li u=s.top();
    s.pop();

    curcost=(li)1e9;
    cnt=0;
    if(!visit[u]){
        dfsreverse(u);
        ans+=curcost;
        res=(res*cnt)%MOD;
    }
}
cout<<ans<<" "<<res<<endl;
return 0;
}

    



























