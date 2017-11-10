
/******************************************
*    AUTHOR:         RAHUL VERMA        *
*    INSTITUITION:   JUET Guna          *
******************************************/

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


const long  double   EPS = 1e-10;
const double pi    =      3.14159265358;
const long  MOD    =	  1000000007;
const long  MAX    =	  1e9;
const long  MIN    =     -1e9;
const long  SIZE   =       4e5+5;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define DEBUGXY(x,y)    cout << '>' << #x << ':' << x <<" "<< #y << ':' << y <<endl;

typedef long long lli;
typedef long li;

int cnt=0,k,r,c;
char a[20][20][20];

void dfs(int x,int y,int z){
if(x<0 || x>=k || y<0 || y>=r || z<0 || z>=c || a[x][y][z]=='#')
    return ;
cnt++;
a[x][y][z]='#';

dfs(x+1,y,z);
dfs(x-1,y,z);
dfs(x,y+1,z);
dfs(x,y-1,z);
dfs(x,y,z+1);
dfs(x,y,z-1);
return ;
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li i,j,x,y;
cin>>k>>r>>c;
for(i=0;i<k;i++)
    for(j=0;j<r;j++)
        cin>>a[i][j];

cin>>x>>y;
dfs(0,x-1,y-1);
cout<<cnt;
}




























