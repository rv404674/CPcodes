
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
int i,j,k,x,flag,n;

cin>>n;int a[n];
for(i=0;i<n;i++) cin>>a[i];

flag=1;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        for(k=j+1;k<n;k++)
            if( a[i]== (a[j]+a[k]))
            {flag=0;cout<<i+1<<" "<<j+1<<" "<<k+1;break;}
    if(!flag) break;
    }
    if(!flag) break;
}
if(i==n) cout<<-1;









return 0;
}
