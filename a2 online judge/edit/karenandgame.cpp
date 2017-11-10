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

int x,y,m,n;
int val[110][110];
int a[50001],b[50001];

li checksum(){
    li sum,i,j;
    sum=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++) sum+=val[i][j];
return sum;
}

void checkrow(){
int i,j;
for(i=0;i<n;i++)
{
    int mn=9999;
    for(j=0;j<m;j++) mn=min(val[i][j],mn);
    for(j=0;j<m;j++) val[i][j]-=mn;

    if(mn==0) continue;
    while(mn--){
        a[x++]=i+1;
    }
}
}


void checkcol(){
int i,j;
for(i=0;i<m;i++)
{
    int mn=9999;
    for(j=0;j<n;j++) mn=min(val[j][i],mn);
    for(j=0;j<n;j++) val[j][i]-=mn;

    if(mn==0) continue;
    while(mn--){
        b[y++]=i+1;
    }
}

}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,j,mx,p;

cin>>n>>m;
x=y=0;

for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        cin>>val[i][j];


if(n<=m)
    {checkrow();checkcol();}
else 
{checkcol();checkrow();}

if(checksum()) cout<<-1;
else
    {
        cout<<x+y<<endl;
        for(i=0;i<x;i++) cout<<"row "<<a[i]<<endl;
        for(i=0;i<y;i++) cout<<"col "<<b[i]<<endl;
    }

return 0;
}


