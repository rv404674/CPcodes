
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li i,j,left,k,v,collect,x,y,n;

cin>>n>>v;
k=v;



li a[60000];
memset(a,0,sizeof(a));
for(i=1;i<=n;i++) {cin>>x>>y;a[x]=y;}
li prev,cur,ans,mi;
ans=cur=prev=0;


for(i=0;i<=4004;i++){
    cur=min(prev,v);
    mi=min(v-cur,a[i]);
    prev=a[i]-mi;
cur+=mi;
ans+=cur;}

cout<<ans<<endl;
return 0;
}
