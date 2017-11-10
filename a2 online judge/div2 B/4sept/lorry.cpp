
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
vector < pair<li,li> > v[2];
li sum[100200];

li vol,q,x,y,i,res,j,k,n,n1,n2;
cin>>n>>vol;
for(i=0;i<n;i++){
    cin>>x>>y;
    x--;
    v[x].push_back(make_pair(y,i+1));
}

sort(v[0].begin(),v[0].end(),greater <pair<li,li>> ());
sort(v[1].begin(),v[1].end(),greater <pair<li,li>> ());

sum[0]=0;
for(i=1;i<=v[0].size();i++)
sum[i]=sum[i-1]+v[0][i-1].first;

res=q=0;
li cur=0;

for(i=0;i<=v[1].size() && (2*i)<=vol;i++){
    q=vol-2*i;
    if(q>v[0].size()) q=v[0].size();
    if(sum[q]+cur > res){res=sum[q]+cur;n1=q;
        n2=i;}
    if(i<v[1].size()) cur+=v[1][i].first;
}

cout<<res<<endl;
for(i=0;i<n1;i++) cout<<v[0][i].second<<" ";
for(i=0;i<n2;i++) cout<<v[1][i].second<<" ";
return 0;
}
