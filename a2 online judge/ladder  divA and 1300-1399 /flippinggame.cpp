
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
int i,gain,n,one,x;

cin>>n;
int a[n];

for(i=one=0;i<n;i++) 
{cin>>x;
    if(x==1) one++,a[i]=-1;
    else a[i]=1;
}

int sum;
gain=-999;

for(i=sum=0;i<n;i++){
    sum+=a[i];
    if(sum<0) sum=0;
    else if(sum>gain) gain=sum;
}

if(one==n) cout<<one-1;
else if(n==1 && x==0) cout<<1;
else
cout<<gain+one;






 return 0;
}
