
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
int n,m,i,ans,j,k;
int a[110][110],b[110][110];

cin>>m>>n;
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        cin>>b[i][j];


for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        a[i][j]=1;


for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
        if(b[i][j]==0)
        {
            for( k=0;k<n;k++)
            a[i][k]=0;
            for( k=0;k<m;k++)
                a[k][j]=0;
        }
}

/*
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
*/


for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        ans=a[i][j];

        for(k=0;k<n;k++)
            ans=ans||a[i][k];
        for(k=0;k<m;k++)
            ans=ans||a[k][j];

        if(ans!=b[i][j]) {cout<<"NO";return 0;}
    }
}

cout<<"YES\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}

return 0;
}



























