
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li n,k,p,x,y,sum,cnt,i;

cin>>n>>k>>p>>x>>y;
li a[n];
sum=cnt=0;

for(i=0;i<k;i++){cin>>a[i];
    if(a[i]>=y) cnt++;
    sum+=a[i];
}

for(i=0;i<n-k;i++){
    if(cnt<(n+1)/2){
        a[k+i]=y;
        cnt++;}
    else a[k+i]=1;
    sum+=a[k+i];
}

if(sum>x || cnt<(n+1)/2) {cout<<"-1";return 0;}
for(i=k;i<n;i++) cout<<a[i]<<" ";
cout<<endl;

return 0;
}




























