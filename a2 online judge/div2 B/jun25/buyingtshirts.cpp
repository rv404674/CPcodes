
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
int i,j,x,y,n;
set <int> s[4];
set <int> :: iterator itr;

cin>>n;
int a[n],c[n],b[n];
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++) cin>>b[i];
for(i=0;i<n;i++) cin>>c[i];

for(i=0;i<n;i++){
    s[b[i]].insert(a[i]);
    s[c[i]].insert(a[i]);
}

int res,m;
cin>>m;
for(j=1;j<=m;j++){
cin>>x;
res=-1;
if(j!=1) cout<<" ";
if(s[x].size()>0){
    itr=s[x].begin();
    res=*itr;
    for(i=1;i<4;i++) s[i].erase(res);
}
cout<<res;
}
return 0;
}

