
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
int n,i,j,k,x;
int cnt[10]={0};
cin>>n;

li sum=0;
for(i=1;i<=n;i++){
    cin>>x;
    sum+=x;
    cnt[x]++;
}

if(!cnt[0]){ cout<<-1;return 0;}

for(i=sum%3;i<10 && sum%3!=0;i+=3){
    if(cnt[i]>=1){
        sum-=i;
        cnt[i]--;
    }
}

// if you have sum 5 ,then you can make it divisible by 3 by subtracting one 2 or two 1.

for(i=3-sum%3;i<10 && sum%3!=0;i+=3)
if(cnt[i]>=1){
    cnt[i]--;
    sum-=i;
    i-=3;
}

if(sum==0) {cout<<0;return 0;}

for(i=9;i>=0;i--)
for(j=cnt[i];j>0;j--)
 cout<<i;
 return 0;
 }



