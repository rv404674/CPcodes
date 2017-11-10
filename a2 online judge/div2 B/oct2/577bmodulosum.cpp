
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li n,x,i,j,k,m;
cin>>n>>m;
if(n>m) {cout<<"YES\n";return 0;}

bool can[1001][1001];
can[0][0]=1;
//can[i][j]=is it possible to make term divisible by m using first i terms
for(i=1;i<=n;i++){
    can[i][0]=1;
    cin>>x;
    x%=m;
    for(j=1;j<=m;j++)
        can[i][j]=can[i-1][j] | can[i-1][(j-x+m)%m];
    if(can[i][m]){cout<<"YES\n";return 0;}
}
cout<<"NO";
return 0;
}




























