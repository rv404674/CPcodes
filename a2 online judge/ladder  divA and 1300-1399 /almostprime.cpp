
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

int isprime(int k){
    if(k==1) return 0;
    if(k==2) return 1;
    if(k%2==0) return 0;

    for(int i=3;i*i<=k;i+=2)
        if(k%i==0) return 0;
    return 1;
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int cnt,n,i,x,k;

cnt=0;
cin>>n;

set<int> s;
set<int> :: iterator itr;

for(i=6;i<=n;i++){
x=0;

    for(k=1;k*k<=i;k++)
        if(i%k==0) {s.insert(k);s.insert(i/k);}

    itr=s.begin();
for(;itr!=s.end();itr++)
    if(isprime(*itr)) x++;

if(x==2) cnt++;
s.clear();    

}
cout<<cnt;





 return 0;
}
