
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
li i,n,m;
cin>>n>>m;
for(i=0;i<n;i++)
    cout<< ( (m+i%m)%2?(m+i%m+1)/2:(m-i%m)/2)<<endl;
return 0;
}

