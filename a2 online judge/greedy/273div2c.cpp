
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
lli n,i,cnt,l,j,ans;
cin>>n;
li a[n];
for(i=0;i<n;i++) cin>>a[i];
sort(a,a+n);

ans=0;l=0;
for(i=n-1;i>=1;i--){
    if(a[i]==a[i-1] || a[i]==a[i-1]+1){
        if(l) ans+=l*a[--i],l=0;
        else l=a[--i];
    }
}

cout<<ans;
return 0;
}




























