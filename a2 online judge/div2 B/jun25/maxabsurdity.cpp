
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
lli i,j,k,ans,n;
ans=-1e11;


cin>>n>>k;
lli a[300000],p[300000],m[300000],r,l,x;
a[0]=0;
for(i=1;i<=n;i++){
    cin>>x;
    a[i]=x+a[i-1];
}


for(i=n-k+1;i>=1;i--){
    if( (a[i+k-1]-a[i-1])>=m[i+1]){
        m[i]=a[i+k-1]-a[i-1];
        p[i]=i;
    }
    else {
        m[i]=m[i+1];
        p[i]=p[i+1];
    }
}

for(i=1;i<=n-k+1;++i){
    if(a[i+k-1]-a[i-1]+m[i+k]>ans){
        ans=a[i+k-1]-a[i-1]+m[i+k];
        l=i;r=p[i+k];
    }
}
cout<<l<<" "<<r<<endl;
return 0;
}
