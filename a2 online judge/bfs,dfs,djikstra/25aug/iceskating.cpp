
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

 pair<int,int>  v[200];
int visit[200];

int n;

void dfs(int src){
    visit[src]=1;
    for(int i=1;i<=n;i++){
        if(i!=src && !visit[i] && (v[src].first==v[i].first || v[src].second==v[i].second) )dfs(i);
                }
    }



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,x,y;

memset(visit,0,sizeof(visit));
cin>>n;
for(i=1;i<=n;i++) cin>>v[i].first>>v[i].second;
int s=0;
for(i=1;i<=n;i++) if(!visit[i]) {dfs(i);s++;}
cout<<s-1<<endl;
return 0;
}
