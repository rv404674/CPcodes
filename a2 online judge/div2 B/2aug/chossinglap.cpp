
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


int i,j,k,n;
cin>>n;
int a[n],b[n],c[n],cost[n];
int min=99999;
for(i=0;i<n;i++)
    cin>>a[i]>>b[i]>>c[i]>>cost[i];

int check[n];
memset(check,1,sizeof(check));
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(a[j]<a[i] && b[j]<b[i] && c[j]<c[i])
            check[j]=0;

for(i=0;i<n;i++)
    if(check[i])
        if(cost[i]<min) {min=cost[i];k=i+1;}
cout<<k;
return 0;
}
