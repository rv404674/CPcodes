
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

int iscat[100005];
vector <int> adj[100005];
li cnthotels,ncat;

void dfs(li child,li par,li c){
    if(iscat[child]>c)
        return ;
    int bl=1;
for(auto itr=adj[child].begin();itr!=adj[child].end();itr++)
    if(*(itr)!=par)
    {
        bl=0;dfs(*itr,child,iscat[child]?c-1:ncat);
    }
if(bl) cnthotels++;
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li v,i,j,x,y;

cnthotels=0;
   cin>>v>>ncat;
   for(i=0;i<v;i++) cin>>iscat[i];
   
   for(i=0;i<v-1;i++){
       cin>>x>>y;
       adj[--x].push_back(--y);
       adj[y].push_back(x);
   }
dfs(0,0,ncat);

cout<<cnthotels<<endl;
return 0;
}
