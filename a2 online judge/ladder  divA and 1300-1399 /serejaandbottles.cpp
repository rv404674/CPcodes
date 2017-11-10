
#include<iostream>
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
int n,x,y,cnt,i,j;
cin>>n;
int a[n+1],b[n+1];
int h[2000];

memset(h,0,sizeof(h));

for(i=1,cnt=0;i<=n;i++) 
cin>>a[i]>>b[i];

for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
     if( i!=j && (b[j]==a[i])) {cnt++;break;}


cout<<n-cnt;
return 0;
}

