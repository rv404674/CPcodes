
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

int r,c,a[200][200];

int check(int x){
    if(x%2){ cout<<x;return 0;}

int i,j;
for(i=0;i<x/2;i++)
    for(j=0;j<c;j++)
        if(a[i][j]!=a[x-i-1][j]) {cout<<x;return 0;}
check(x/2);
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li i,j;
cin>>r>>c;
for(i=0;i<r;i++)
    for(j=0;j<c;j++)
        cin>>a[i][j];

check(r);
return 0;
}


