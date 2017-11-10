
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
int m,x,y,n,i,j;
int a[1005]={0};
cin>>n>>m;

for(i=0;i<m;i++){
    cin>>x>>y;
    a[x]=1;a[y]=1;
}
for(i=1;i<=n;i++)
if(!a[i]) break;

cout<<n-1<<endl;
for(j=1;j<=n;j++)
if(i!=j)
    cout<<i<<" "<<j<<endl;







return 0;
}
