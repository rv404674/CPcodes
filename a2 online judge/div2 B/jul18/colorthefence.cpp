
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
li mn,n,i,v,x,cnt;

cin>>v;
li a[10];
mn=1;
for(i=1;i<=9;i++) 
{cin>>a[i];
if(a[i]<a[mn]) mn=i;
}

if(a[mn]>v) {cout<<"-1";return 0;}
n=v/a[mn];

while(n--)
    for(i=9;i>=1;i--)
        if(n*a[mn]+a[i]<=v)
        {cout<<i;
            v-=a[i];
            break;
        }
return 0;
}
