
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

li n;
vector <li> adj[100006];
int color[100006];
bool visit[100006];

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
lli clr,i,v,x,u,y;

cin>>n;
for(i=0;i<n;i++){
    cin>>x>>y;
    adj[x-1].push_back(y-1);
    adj[y-1].push_back(x-1);
}

memset(color,-1,sizeof(color));    
memset(visit,false,sizeof(visit));


color[0]=0;

queue <li> q;
q.push(0);
visit[0]=true;

while(!q.empty()){
u=q.front();
q.pop();
 clr= (color[u]==1?0:1);

     for(auto itr=adj[u].begin();itr!=adj[u].end();itr++){
if( !visit[*itr]){

    color[*itr]=clr;
    visit[*itr]=true;
    q.push(*itr);
}
}

}

lli b,r;
for(i=b=r=0;i<n;i++) 
if(color[i]) b++;
else r++;



cout<<b*r-(n-1);
return 0;
}


























