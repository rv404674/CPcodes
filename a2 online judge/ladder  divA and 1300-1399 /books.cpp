
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
lli n,t,i,sum,cnt,x,mx;
mx=-999;

sum=x=cnt=0;

cin>>n>>t;lli a[n];

for(i=0;i<n;i++) cin>>a[i];

for(i=0;i<n;i++)
{
    sum+=a[i];
    cnt++;
    while(sum>t){
        sum-=a[x++];
        cnt--;}
    if(cnt>mx) mx=cnt;
}

cout<<mx;
 
return 0;
}
