
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


vector <int> adj[1001];
vector <int> adjrev[1001];
int visited[1001]={0};
stack <int> s;
int v,e;

void dfs(int src){
visited[src]=1;
for(auto itr=adj[src].begin();itr!=adj[src].end();itr++)
    if(!visited[*itr])
        dfs(*itr);
s.push(src);
}

void dfsreverse(int src){
    cout<<src<<" ";
    visited[src]=1;
    for(auto itr=adjrev[src].begin();itr!=adjrev[src].end();itr++)
        if(!visited[*itr])
            dfsreverse(*itr);
}





int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,x,y;
cin>>v>>e;
for(i=0;i<e;i++){
    cin>>x>>y;
    adj[x].push_back(y);
    adjrev[y].push_back(x);
}

for(i=0;i<v;i++)
if(!visited[i])
    dfs(i);

memset(visited,0,sizeof(visited));

while(!s.empty()){
    int u=s.top();
    s.pop();

    if(visited[u]) continue;
    else dfsreverse(u);
    cout<<endl;
}

return 0;
}






























