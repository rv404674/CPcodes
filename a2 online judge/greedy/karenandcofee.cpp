
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


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li n,q,l,r,i,k,x,y;

    cin>>n>>k>>q;
li a[200010],b[200010];
memset(a,0,sizeof(a));memset(b,0,sizeof(b));

for(i=0;i<n;i++)
{cin>>x>>y;
    a[x]++;a[y+1]--;}

    for(i=1;i<200010;i++) a[i]+=a[i-1];
for(i=1;i<200010;i++) b[i]=b[i-1]+(a[i]>=k);

while(q--){
    cin>>x>>y;
    cout<<b[y]-b[x-1]<<endl;
}
    




 return 0;
}
