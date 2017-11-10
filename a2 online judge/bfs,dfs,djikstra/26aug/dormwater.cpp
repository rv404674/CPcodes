
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

struct data{
    li x,y,z;
}v[1005];

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li mn, i,n,j,x,y,w,p;

li out[1005],in[1005],value[1005];

memset(out,0,sizeof(out));
memset(in,0,sizeof(in));
memset(value,0,sizeof(value));

cin>>n>>p;
for(i=0;i<p;i++){
    cin>>x>>y>>w;
in[y]=x;
out[x]=y;
value[x]=w;
}

li ans=0;
for(i=1;i<=n;i++){

    if(!in[i] && out[i]){
        x=i;
        mn=value[i];
        while(out[x]){
            mn=min(mn,value[x]);
            x=out[x];
        }

        v[ans++]=(data){i,x,mn};
    }
}
        
cout<<ans<<endl;
for( j=0;j<ans;j++)
cout<<v[j].x<<" "<<v[j].y<<" "<<v[j].z<<endl;

return 0;
}
