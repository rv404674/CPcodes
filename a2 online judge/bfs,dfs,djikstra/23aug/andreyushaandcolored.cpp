
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
vector <int> adj[100005];
li color[100005],ans;

void dfs(li now,li parent){
li cur=1;
for(auto itr=adj[now].begin();itr!=adj[now].end();itr++){
    if(*itr==parent) continue;
    while(cur==color[now] || cur==color[parent])
        cur++;
    color[*itr]=cur++;
    ans=max(ans,color[*itr]);
    dfs(*itr,now);
}
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li x,y,n,k,i,j;
cin>>n;

for(i=0;i<n-1;i++){
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}

color[1]=1;
ans=-99;
dfs(1,0);

cout<<ans<<endl;
for(i=1;i<=n;i++)
cout<<color[i]<<" ";
return 0;
}
