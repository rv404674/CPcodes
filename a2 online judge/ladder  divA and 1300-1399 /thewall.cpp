
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

lli solve(lli x,lli y,lli z){
    lli lcm=1LL*x*y;
    lcm=lcm/__gcd(x,y);
    return z/lcm;
}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
lli x,y,a,b,t1,t2;

cin>>x>>y>>a>>b;
cout<<solve(x,y,b)-solve(x,y,a-1);

 return 0;
}
