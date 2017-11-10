
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
li a,b,c,x,i,y,z;

cin>>a>>b>>c;

if( (a+b+c)%2!=0) {cout<<"Impossible";return 0;}

for(i=0;i<=1000000;i++){
    x=i;
    y=b-x;
    z=a-x;
    if(y+z == c && y>=0 && z>=0)
    {cout<<x<<" "<<y<<" "<<z;return 0;}
}

cout<<"Impossible";
return 0;
}
    
