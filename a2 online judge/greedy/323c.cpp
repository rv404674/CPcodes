
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
li n,i,j,x,pre;
map<li,li> m;
vector<li> v;

cin>>n;

li a[n*n+1];
for(i=0;i<n*n;i++){
    cin>>a[i];
    m[a[i]]++;}

sort(a,a+n*n);
for(i=n*n-1;i>=0;i--){
    if(m[a[i]]>0){
        cout<<a[i]<<" ";
        for(j=0;j<v.size();j++)
            m[__gcd(v[j],a[i])]-=2;
        v.push_back(a[i]);
        m[a[i]]--;
    }
}

return 0;
}
