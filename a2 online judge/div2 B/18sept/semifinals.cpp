
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
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
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
li n,x,y,k,i;

cin>>n;
li a[n+1],b[n+1];


for(i=1;i<=n;i++){
    cin>>a[i]>>b[i];}

for(i=1;i<=n;i++)
{if(i*2<=n || a[i]<b[n+1-i])
    cout<<"1";
    else cout<<"0";
}

cout<<endl;
for(i=1;i<=n;i++){
    if(i*2<=n || b[i]<a[n+1-i]) cout<<"1";
    else cout<<"0";
}

return 0;
}




























