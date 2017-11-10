
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

lli l,r;
lli query(lli n,lli i,lli j){
    if(n==0 || i>r || j<l) return 0;
    if(n==1) return 1;

    lli mid=(i+j)/2;
    return query(n/2,i,mid-1)+query(n%2,mid,mid)+query(n/2,mid+1,j);
}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
lli n,len,x;
cin>>n>>l>>r;

len=1;
x=n;
while(x>1){
    len*=2;
    x/=2;
}
len=2*len-1;

cout<<query(n,1,len);
return 0;
}





























