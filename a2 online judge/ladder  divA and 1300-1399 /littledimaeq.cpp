
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
lli i,x,a,b,c,suma;

  lli  R=0;
    
cin>>a>>b>>c;
lli tab[2000];

for(i=1;i<=100;i++){
    lli x=i;
    for(lli j=1;j<a;j++) x*=i;
    x*=b;
    x+=c;
    if(x>=1000000000) continue;
    tab[R]=x;
    suma=0;
    while(x){
        suma+=x%10;
        x/=10;
    }
    if(suma==i) R++;
}
cout<<R<<endl;
for(i=0;i<R;i++) cout<<tab[i]<<" ";


 return 0;
}
