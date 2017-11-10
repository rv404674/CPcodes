
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int n,i,j,x,y;
int a[55][55]={0},org[50][50]={0};

cin>>n;
x=n*(n-1)/2-1;
while(x--){
cin>>i>>j;
a[i][j]=1;
a[j][i]=1;
org[i][j]=1;
}


for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
if(!a[i][j])
{x=i;y=j; break;}

if(j!= (n+1)) break;
}

for(i=1;i<=n;i++){
    if(org[i][x])
        if(org[y][i]) {cout<<y<<" "<<x;return 0;}
    if(org[x][i])
        if(org[i][y]) {cout<<x<<" "<<y;return 0;}

    if(org[i][y])
        if(org[x][i]) {cout<<x<<" "<<y;return 0;}

    if(org[y][i])
        if(org[i][x]) {cout<<y<<" "<<x;return 0;}
}
cout<<x<<" "<<y;
return 0;
}

























