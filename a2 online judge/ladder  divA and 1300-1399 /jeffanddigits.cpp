
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
int i,n5,n0,n,x;
cin>>n;

n5=n0=0;
for(i=0;i<n;i++)
{cin>>x;
    if(x==5) n5++;
        else n0++;
}



n5=(n5/9)*9;
if(!n0) cout<<-1;
else if(!n5) cout<<0;
else 
{
    for(i=0;i<n5;i++) cout<<5;
    for(i=0;i<n0;i++) cout<<0;
}



 return 0;
}
