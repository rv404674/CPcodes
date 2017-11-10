
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


vector <li> adj[200005];
li color[200005];
li ans,clr;
bool ok;


void dfs(li child,li parent){
    ok= ok && (color[child]==clr);
    for(auto itr=adj[child].begin();itr!=adj[child].end();itr++){
        if(*itr!=parent) 
            dfs(*itr,child);
    }
}


int solve(li src){
ans=true;
for(auto itr=adj[src].begin();itr!=adj[src].end();itr++){
    ok=true;
    clr=color[*itr];
    dfs(*itr,src);
    ans=ans && ok;}
return ans;
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li n,i,j,x,y;
cin>>n;
for(i=0;i<n-1;i++) {cin>>x>>y;adj[x].push_back(y);
    adj[y].push_back(x);
}

for(i=1;i<=n;i++) cin>>color[i];
li root1,root2;
root1=root2=-1;

for(i=1;i<=n;i++)
  for(auto itr=adj[i].begin();itr!=adj[i].end();itr++)
         if(color[i]!=color[*itr]){
             root1=i;
             root2=*itr;
         }

if(root1==-1) {cout<<"YES\n1";return 0;}
if(solve(root1)) {cout<<"YES\n";cout<<root1;return 0;
}

if(solve(root2)) {cout<<"YES\n";cout<<root2;return 0;}

cout<<"NO";
return 0;
}
