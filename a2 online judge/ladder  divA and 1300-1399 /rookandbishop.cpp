
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
int r1,r2,c1,c2;
cin>>r1>>c1>>r2>>c2;

if(r1==r2 || c1==c2)  cout<<"1 ";
else cout<<"2 ";

if( (r1+c1)%2 != (r2+c2)%2) cout<<"0 ";
else if( (r1+c1) ==(r2+c2) || ( (r1-c1)==(r2-c2)) ) cout<<"1 ";
else cout<<"2 ";


cout<<max( abs(r1-r2),abs(c1-c2));

















return 0;
}
