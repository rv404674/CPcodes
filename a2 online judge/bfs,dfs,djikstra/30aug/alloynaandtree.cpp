
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
lli ans,dist;
li a[100050];
vector < pair<li,li> > adj[100050];

void dfs(li node,li d){
    if(d>a[node-1]) return ;
ans++;

for(auto itr=adj[node].begin();itr!=adj[node].end();itr++)
    dfs((*itr).first,max(0L,d+(*itr).second));
}






int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li n,m,i,x,w;
cin>>n;
for(i=ans=0;i<n;i++) cin>>a[i];

for(i=1;i<n;i++){
    cin>>x>>w;
    adj[x].push_back(make_pair(i+1,w));
}

dfs(1,0);
cout<<n-ans<<endl;
return 0;
}
