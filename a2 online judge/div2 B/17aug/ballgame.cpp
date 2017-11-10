
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


int a[200],n,x;
int check(int i){
int cnt1,cnt2,l,r;
l=i-1;r=i;

cnt1=0;
while(l>0 && a[l]==x) {l--;cnt1++;}
while(r<=n && a[r]==x) {r++;cnt1++;}

if(cnt1+1 <3) return 0;
while(l>0 && r<=n && a[l]==a[r]){
    cnt2=0;
    int y=a[l];
    while(l>0 && a[l]==y) {l--;cnt2++;}
    while(r<=n && a[r]==y) {r++;cnt2++;}
     
    if(cnt2<3) return cnt1;
    cnt1+=cnt2;
}
return cnt1;
}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,mx,k;
mx=-99;
cin>>n>>k>>x;
for(i=1;i<=n;i++) cin>>a[i];
for(i=1;i<=n;i++) mx=max(mx,check(i));
cout<<mx<<endl;
return 0;
}
