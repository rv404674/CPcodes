
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


int m,n,total,a[105][105],hx,hy,visited[105][105];
int isvalid(int i,int j){
    if(i>=0 && i<m && j>=0 && j<n) return 1;
    else return 0;
}


void dfs(int i,int j,int sum){
if(!isvalid(i,j)) return ;
//cout<<i<<" "<<j<<endl;

visited[i][j]=1;
    if(i==hx && j==hy){

 //   cout<<"i j sum "<<i<<" "<<" "<<j<<" "<<sum<<endl;
    if(sum<total) total=sum;
    visited[i][j]=0;
return ;
}

int l,m;
for(int k=0;k<4;k++)
{
    l=i+dx[k];m=j+dy[k];
    if(isvalid(l,m) && !visited[l][m])
        dfs(l,m,sum+a[l][m]);
}
visited[i][j]=0;
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int t,i,j,left;
cin>>t;

while(t--){


    total=50000;
    cin>>m>>n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    cin>>hx>>hy>>left;
hx--;hy--;

for(i=0;i<m;i++)
    for(j=0;j<n;j++)
visited[i][j]=0;

    dfs(0,0,a[0][0]);
//    DEBUG(total)
    if(total<=left) {cout<<"YES\n";cout<<left-total<<endl;}
    else cout<<"NO";
}
return 0;
}
