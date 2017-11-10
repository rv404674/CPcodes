
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

int xx[9]={-1,-1,-1,0,0,1,1,1,0};
int yy[9]={-1,0,1,-1,1,-1,0,1,0};
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

int a[1005][1005]={0};
int i,j,n,m,x,y;
cin>>n>>m;
for(i=1;i<=m;i++){
    cin>>x>>y;
    for(int k=0;k<9;k++) 
    {int l=x+xx[k];int r=y+yy[k];
        if( l<0 || l>n || r<0 ||r>n) continue;
        if(++a[l][r]==9) {cout<<i<<endl;return 0;}
    }
}
cout<<-1;
return 0;
}
