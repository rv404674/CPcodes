
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

vector <int> s,ans;
int par[SIZE],cnt[SIZE]={0},a[SIZE],type[SIZE];

void dfs(int i){
    s.push_back(i);
    if(a[i]!=-1 && cnt[a[i]]==1) dfs(a[i]);
    else if(s.size()>ans.size()) ans=s;
    s.pop_back();
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,j,n;
cin>>n;
for(i=0;i<n;i++) cin>>type[i];
for(i=0;i<n;i++){
    cin>>a[i];
    a[i]--;}
memset(cnt,0,sizeof(cnt));

for(i=0;i<n;i++)
    if(a[i]>=0)
        cnt[a[i]]++;
for(i=0;i<n;i++)
    if(type[i])
        dfs(i);

reverse(ans.begin(),ans.end());
cout<<ans.size()<<endl;
for(auto itr:ans)
    cout<<itr+1<<" ";

return 0;
}
