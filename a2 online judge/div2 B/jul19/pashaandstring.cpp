
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
string s;
int m,i,j,n,cnt,x;
cin>>s>>n;
int sl=s.size();

int a[200005];
for(i=0;i<n;i++) {cin>>x;a[x-1]++;}
for(i=1;i<sl/2;i++) a[i]+=a[i-1];

for(i=0;i<sl/2;i++)
    if(a[i]%2)
        swap(s[i],s[sl-i-1]);
cout<<s;
return 0;
}
