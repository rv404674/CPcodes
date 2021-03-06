
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
li n,i,k,cnt,j;
cin>>n;
li a[n],b[n];
int pre[2000005];

memset(pre,0,sizeof(pre));
for(i=0;i<n;i++) {cin>>a[i];pre[a[i]]=1;}
for(i=0;i<n;i++) {cin>>b[i];pre[b[i]]=1;}

for(i=cnt=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        li x=a[i]^a[j];
        if(x<=2000000)
        if(pre[x]) cnt++;
    }

if(cnt%2) cout<<"Koyomi\n";
else cout<<"Karen\n";
return 0;
}
