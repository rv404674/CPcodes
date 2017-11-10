
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
lli n,i,k,x;
lli dp[100005]={0},a[100005]={0};
cin>>n;


for(i=0;i<n;i++) {cin>>x;a[x]++;}

dp[0]=0;
dp[1]=a[1];
for(i=2;i<=100004;i++)
    dp[i]=max(dp[i-1],dp[i-2]+a[i]*i);
cout<<dp[100004];
return 0;
}



























