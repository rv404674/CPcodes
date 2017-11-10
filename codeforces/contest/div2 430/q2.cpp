
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
li r,d,orgr,cnt,n,x,y;
long double z1,z2,r2;

    cin>>r>>d;
cnt=0;
orgr=r-d;
cin>>n;
while(n--){
    cin>>x>>y>>r2;
z1=sqrt(x*x+y*y)+r2*1.000000;
z2=sqrt(x*x+y*y)-r2*1.00000;
//cout<<z<<endl;
if(z1<=r && z2>=orgr) cnt++;
}
cout<<cnt;
return 0;
}
