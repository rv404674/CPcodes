
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
lli w,m,k,ten,dig,i,cnt;

cin>>w>>m>>k;
w/=k;

ten=1;

cnt=dig=0;

while(1){
    while(m>=ten){
        ten*=10;
        dig++;
    }
    if(w>=dig*(ten-m)){
        w-=dig*(ten-m);
        cnt+=(ten-m);
        m=ten;}
    else{
        cnt+=w/dig;
        break;
    }
}
cout<<cnt;
return 0;
}
