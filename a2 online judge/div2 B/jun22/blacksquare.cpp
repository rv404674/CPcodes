
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
int i,j,mnx,mxx,mny,mxy,m,n;
int b=0;
char ch;
mnx=101;mxx=0;mxy=0;mny=101;

cin>>n>>m;
for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++){
        cin>>ch;
        if(ch=='B'){
            b++;
          if(i<mnx) mnx=i;
          if(i>mxx) mxx=i;
          if(j<mny) mny=j;
          if(j>mxy) mxy=j;
    }
    }
}

int s=max(mxx-mnx+1,mxy-mny+1);
if(b==0) {cout<<1;return 0;}

if(s>n || s>m) cout<<"-1";
else cout<<s*s-b;
return 0;
}
