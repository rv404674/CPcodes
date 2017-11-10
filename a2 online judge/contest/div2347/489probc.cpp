
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
int n,m,sum1,sum2,i,j;

cin>>n>>sum1;
sum2=sum1;

if(n==1 && sum1==0) {cout<<"0 0";return 0;}
if( sum1<1 || sum1>9*n){cout<<"-1 -1";return 0;}


for(i=1;i<=n;i++){
    if(i==1)
    {
        for(j=1;j<=9;j++)
            if(sum1-j>=0 && (sum1-j)<=9*(n-i))
            {cout<<j;
                sum1-=j;
                break;}
    }
  else {
      for(j=0;j<=9;j++)
          if(sum1-j>=0 && (sum1-j)<=9*(n-i))
          {cout<<j;sum1-=j;break;}
  }
}

cout<<" ";

for(i=1;i<=n;i++)
{
    for(j=9;j>=0;j--)
        if(sum2-j>=0 && (sum2-j)<=9*(n-i))
        {cout<<j;
            sum2-=j;
            break;
        }
}
return 0;
}
































