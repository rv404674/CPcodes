
#include<iostream>
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


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int n,m,i,j,x;

cin>>n;
int a[n];
for(i=0;i<n;i++) cin>>a[i];

cin>>m;
int b[m];
for(j=0;j<m;j++) cin>>b[j];

vector<int> v;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
if( (b[i]%a[j]) ==0){
v.push_back(b[i]/a[j]);}
}


sort(v.begin(),v.end());
x=v[v.size()-1];


x=v.end()-lower_bound(v.begin(),v.end(),x);

cout<<x;







 return 0;








}
