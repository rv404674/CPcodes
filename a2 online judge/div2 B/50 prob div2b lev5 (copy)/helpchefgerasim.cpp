
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
li a[SIZE],cnt[SIZE]={0};
li i,n,k,sum=0;

cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
    cnt[a[i]]++;
    sum+=a[i];
}

if(cnt[sum/n]==n) {cout<<"Exemplary pages.";return 0;}
if(sum%n!=0 || cnt[sum/n]!=(n-2)) {cout<<"Unrecoverable configuration.";return 0;}
li l,g;

for(i=0;i<n;i++)
if(a[i]>sum/n) g=i;
else if(a[i]<sum/n) l=i;

cout<<a[g]-sum/n <<" ml. from cup #"<<l+1<<" to cup #"<<g+1<<".";
return 0;
}




























