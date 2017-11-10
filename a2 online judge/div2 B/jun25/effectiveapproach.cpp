
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
li k,i,j,x,n,m;
li p1[200000],p2[200000];
bool check[200000]={false};

vector <li> a;
cin>>n;
for(i=0;i<n;i++)
{cin>>x;a.push_back(x);}

k=1;
for(i=0;i<n;i++){
    if(!check[a[i]]){
        check[a[i]]=true;
        p1[a[i]]=k;
    }
    k++;
}

reverse(a.begin(),a.end());
memset(check,false,sizeof(check));

k=1;
for(i=0;i<n;i++){
    if(!check[a[i]]){
        check[a[i]]=true;
        p2[a[i]]=k;
    }
    k++;
}
//for(i=1;i<=9;i++) cout<<p2[i]<<" ";

cin>>m;
lli nv,nl;
nv=nl=0;
while(m--){
    cin>>x;
    nv+=p1[x];nl+=p2[x];

}
cout<<nv<<" "<<nl;
return 0;
}
