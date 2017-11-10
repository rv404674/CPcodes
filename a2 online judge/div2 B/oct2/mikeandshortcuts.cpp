
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
#define MAX 		1000000000
#define MIN    		-1000000000

typedef long long lli;
typedef long li;

li a[200006],dist[200006],n;

void dfs(li cur,li step){
    if(cur<0 || cur>n-1) return;

    if(dist[cur]<=step) return;
    dist[cur]=step;
    dfs(a[cur]-1,step+1);
    dfs(cur+1,step+1);
    dfs(cur-1,step+1);
}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li i;
cin>>n;
memset(dist,9999999,sizeof(dist));

for(i=0;i<n;i++) cin>>a[i];
dfs(0,0);
for(i=0;i<n;i++) cout<<dist[i]<<" ";
return 0;
}




























