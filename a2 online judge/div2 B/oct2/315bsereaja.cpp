
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
lli n,q,sum,i,j,x,y,c;
cin>>n>>q;
lli a[n+100];
for(i=1;i<=n;i++) cin>>a[i];
sum=0;

while(q--){
    cin>>c;
    if(c==3){
        cin>>x;
        cout<<a[x]+sum<<endl;
    }
    else if(c==1){
        cin>>x>>y;
        a[x]=y-sum;
    }
    else {
        cin>>x;
        sum+=x;
    }
}
return 0;
}
