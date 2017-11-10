
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
#define SIZE            100000

typedef long long lli;
typedef long li;

li n,m,k;
vector <li> adj[SIZE+100];
map<li,li> a;
int visit[SIZE+100];
int unlock[SIZE+100],key[SIZE+100],lock[SIZE+100];

void bfs(int i){
    queue<li> q;
    set<li> s;
    visit[i]=1;

    q.push(i);
    li u,x;
    while(!q.empty()){
        u=q.front();
        q.pop();

        for(auto itr:adj[u]){
            if(!visit[itr]){

                if(key[itr])
                    {x=a[itr];
                        unlock[x]=1;
                        q.push(itr);

                        if(s.find(x)!=s.end()){
                            s.erase(x);
                            q.push(x);
                        }
                    }
                    else if(lock[itr]){
                        if(unlock[itr]){
                            q.push(itr);
                        }
                        else s.insert(itr);
                    }

                    else q.push(itr);
                }
        }
        visit[u]=1;
    }
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

li i,j,x,y;

while(1){
    cin>>n>>k>>m;
vector <li> v;
v=vector <li> (n+100);

    if(n==-1 && m==-1 && k==-1) break;

    memset(visit,0,sizeof(visit));
    memset(unlock,0,sizeof(unlock));
    memset(key,0,sizeof(key));
    memset(lock,0,sizeof(lock));



    for(i=1;i<=k;i++)
    {cin>>x>>y;
       key[x]=lock[y]=1;
       a[x]=y;
    }

    for(i=1;i<=m;i++){
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
    }



bfs(1);
//for(i=1;i<=n;i++) cout<<visit[i]<<endl;

if(visit[n]) cout<<"Y\n";
else cout<<"N\n";

a.clear();
memset(adj,0,sizeof(adj));
}
return 0;
}
