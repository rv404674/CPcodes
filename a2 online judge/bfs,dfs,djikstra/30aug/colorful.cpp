
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

set <li> adj[100050];
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li n,m,i,j,x,y;
cin>>n>>m;
li a[100050],mn;
mn=(li)1e8;
for(i=1;i<=n;i++) {cin>>a[i];mn=min(mn,a[i]);}

while(m--){
    cin>>x>>y;
    if(a[x]!=a[y]){
        adj[a[x]].insert(a[y]);
        adj[a[y]].insert(a[x]);
    }
}

for(i=1;i<=100052;i++)
if(adj[i].size()>adj[mn].size())
    mn=i;

    cout<<mn<<endl;
    return 0;
    }




























