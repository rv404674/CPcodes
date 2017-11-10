
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
int t,i,n,cnt,j,x,flag,flag1,flag2;

    cin>>t;
while(t--){
cin>>n;
int a[n];
int cnt[10];
memset(cnt,0,sizeof(cnt));

flag=flag1=flag2=1;
for(i=0;i<n;i++) {cin>>a[i];if(a[i]>7) flag=0;cnt[a[i]]++;}

for(i=1;i<=7;i++) if(!cnt[i]) {flag1=0;break;}

if(n%2) x=n/2;
else x=n/2-1;

for(i=0;i<=x;i++)
    if(a[i]!=a[n-i-1]) {flag2=0;break;}

if( !flag || !flag1 || !flag2) cout<<"no\n";
else cout<<"yes\n";

}

return 0;
}
