
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
lli n,a[1100];

int check(double x){
int k=0;
for(int i=2;i<=n;i++){
if( a[i]-a[1]==(i-1)*x) continue;

if(k==0) k=i;
else if( (a[i]-a[k])!=(i-k)*x) return 0;
}
return k!=0 ;
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li i,x;
cin>>n;
for(i=1;i<=n;i++) cin>>a[i];
if(check(a[2]-a[1]) || check((a[3]-a[1])/2.0) || check(a[3]-a[2])) cout<<"Yes\n";
else cout<<"No\n";
return 0;
}




























