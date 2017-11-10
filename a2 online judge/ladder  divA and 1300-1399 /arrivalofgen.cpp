
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

int i,j,mn,mx,cnt,n,mx1,min1;
cin>>n;
int a[n];

for(i=0;i<n;i++) cin>>a[i];
mn=99999;mx=-9999;

for(i=0;i<n;i++){
     if(a[i]<=mn) {mn=a[i],min1=i ;} 
}

    
    for(i=n-1;i>=0;i--)
    if(a[i]>=mx) {mx=a[i],mx1=i;}

if(min1<mx1) cout<<n-1-min1+mx1-1;
else cout<<n-1-min1+mx1;























































 return 0;
}
