
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
int n,m,i,j,x,y;
cin>>n>>m;

li cnt[n+1]={0};
bool a[n+1][n+1]={false};

for(i=0;i<m;i++){
    cin>>x>>y;
    cnt[x]++;cnt[y]++;
    a[x][y]=a[y][x]=true;
}

li z,mn=99999999;
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
     if(a[i][j]){

         for(li k=j+1;k<=n;k++)
        if(a[i][k] &&  a[j][k])
        {z=cnt[i]+cnt[k]+cnt[j];
            mn=min(z,mn);
        }
    }

}
if(mn==99999999) cout<<-1;
else cout<<mn-6;
return 0;
}
