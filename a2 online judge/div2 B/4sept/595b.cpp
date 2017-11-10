
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
lli n,i,cnt,k,flag,b,ans;
cin>>n>>k;
cnt=k;

flag=1;
while(cnt--) flag*=10;
cnt=1;

lli a[n];
for(i=0;i<n/k;i++) cin>>a[i];
for(i=0;i<n/k;i++)
{cin>>b;
    ans=(flag-1)/a[i];
    if(b!=0){
        ans++;//0
        ans-= ((b+1)*(flag/10)-1)/a[i]-(b*(flag/10)-1)/a[i];
    }
    else ans-=(flag/10-1)/a[i];
    cnt=(cnt*ans)%MOD;
}
cout<<cnt<<endl;
return 0;
}



























