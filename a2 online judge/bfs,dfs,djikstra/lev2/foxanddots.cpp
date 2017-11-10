
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

int r,c,visit[100][100];
char clr;
char a[100][100];

int dfs(int x,int y,int parx,int pary){
    int k,i,j;
    visit[x][y]=true;
    
    for(k=0;k<4;k++){
        i=x+dx[k];
        j=y+dy[k];

        if(i<0 || i>r-1 || j<0 || j>c-1) continue;
        if(i==parx && j==pary) continue;
        if(a[i][j]!=clr) continue;

        if(visit[i][j]) return 1;
        if(dfs(i,j,x,y)) return 1;
    }
    return 0;
}




int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
cin>>r>>c;
int i,j;

for(i=0;i<r;i++)
    for(j=0;j<c;j++)
        cin>>a[i][j];

for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        clr=a[i][j];
        memset(visit,false,sizeof(visit));
        if(dfs(i,j,-1,-1))
        {cout<<"Yes\n";return 0;
        }
    }

cout<<"No";
return 0;
}




























