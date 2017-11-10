
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
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int isleap(int yr){

    if(yr%400==0) return 1;
    
    if(yr%4==0){
    if(yr%100==0) return 0;
    return 1;
}

return 0;
}

//yr is starting from 1900
//so ans=
//totaldays(y2,1900)-total(y1,1900)
int findans(int y,int m,int d){
    int ans=0;
    for(int i=1900;i<y;i++) ans+=365+isleap(i);
    for(int i=1;i<m;i++) ans+=days[i]+(i==2 && isleap(y) );
    return ans+d;
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int y1,y2,d1,d2,m1,m2,i,j,sum;
char c;
cin>>y1>>c>>m1>>c>>d1;
cin>>y2>>c>>m2>>c>>d2;

cout<<abs( findans(y1,m1,d1)-findans(y2,m2,d2));
return 0;
}
