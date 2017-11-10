
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
li n,i;
cin>>n;
li a[4],b[4],c[4],d[4];
for(i=0;i<4;i++) cin>>a[i]>>b[i]>>c[i]>>d[i];

for(i=0;i<4;i++)
    if( (min(a[i],b[i]) +min(c[i],d[i]) )<=n)
    {cout<<i+1<<" "<<min(a[i],b[i])<<" "<<max( min(c[i],d[i]),n-min
(a[i],b[i]));
    break;}

    if(i==4) cout<<-1;
















return 0;
}
