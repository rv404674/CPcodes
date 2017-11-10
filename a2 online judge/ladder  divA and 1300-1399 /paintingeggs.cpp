
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
li i,n;lli sum1,sum2;

cin>>n;
int a[n],b[n];
for(i=sum1=sum2=0;i<n;i++) cin>>a[i]>>b[i];

for(i=0;i<n;i++)
    if( (sum1+a[i])-sum2 <=500 )
    {cout<<"A";sum1+=a[i];}
    else
    {    cout<<"G";sum2+=b[i];
        }
    










































 return 0;
}
