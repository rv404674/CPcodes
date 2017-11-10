
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
li n,i,mn,sum,x,index,k;
mn=99999999;

cin>>n>>k;
int a[n+1];
a[0]=0;
for(i=1;i<=n;i++) {cin>>a[i];a[i]+=a[i-1];}
for(i=k;i<=n;i++){
    x=a[i]-a[i-k];
    if(x<mn){mn=x;index=i;}
}


cout<<index-k+1;
return 0;
}
