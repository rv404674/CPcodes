
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
li i,j,m,n,x,y,prev,q;

cin>>n>>m>>q;
bool ishole[n+1];
memset(ishole,false,sizeof(ishole));

for(i=0;i<m;i++)
{cin>>x;ishole[x]=true;}

prev=1;
while(q--){
    cin>>x>>y;

if(ishole[prev]) {cout<<prev;return 0;}
if( x==prev) prev=y;
else if(y==prev) prev=x;


}

cout<<prev;
return 0;
}
