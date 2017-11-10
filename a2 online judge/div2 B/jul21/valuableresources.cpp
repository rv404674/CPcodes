
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
li n,i,j,x,y;
cin>>n;

li a[n],b[n];
for(i=0;i<n;i++)
        cin>>a[i]>>b[i];

        sort(a,a+n);sort(b,b+n);
        li maxx=a[n-1]-a[0];li maxy=b[n-1]-b[0];

        maxx>maxy?cout<<maxx*1LL*maxx:cout<<maxy*1LL*maxy;
        return 0;
        }
