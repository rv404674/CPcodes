
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

struct point{
    li x,y,p;
}a[10006];

li dist(point q){
    return (q.x*q.x + q.y*q.y);
}

bool comp(point x,point y){
    return (dist(x)<dist(y));
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li i,n,s,sum;
cin>>n>>s;
for(i=0;i<n;i++) cin>>a[i].x>>a[i].y>>a[i].p;
sort(a,a+n,comp);

sum=s;
for(i=0;i<n;i++){
    sum+=a[i].p;
    if(sum>=1000000) {cout<<setprecision(8)<<fixed<<(double)(sqrt(dist(a[i])));return 0;}
}
cout<<-1;
return 0;
}
