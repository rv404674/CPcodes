
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

int isprime(int n){
for(int i=2;i<n;i++)
    if(n%i==0) return 0;
return 1;
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int n,k,i,j,x;
cin>>n;
int a[n];

k=0;
for(i=2;i<=n;i++)
    if(isprime(i)){
        for(j=i;j<=n;j=j*i) a[k++]=j;
    }

cout<<k<<endl;
for(i=0;i<k;i++) cout<<a[i]<<" ";
return 0;
}




























