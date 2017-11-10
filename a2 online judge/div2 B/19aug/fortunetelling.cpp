
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
int n,i,j,mn,sum;

cin>>n;
int a[n];
for(i=sum=0;i<n;i++) {cin>>a[i];sum+=a[i]; }
if(sum%2) {cout<<sum;return 0;}

mn=999;
for(i=0;i<n;i++)
    if(a[i]%2)
    mn=min(mn,a[i]);

if(mn==999){cout<<0;return 0;}
cout<<sum-mn;
return 0;
}
