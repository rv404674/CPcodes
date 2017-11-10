
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
int dp[700][700],a[700][2],i,k,j,t,w,h,n;
cin>>t;

while(t--){
    cin>>w>>h;
    cin>>n;

for(i=0;i<=w;i++) 
    for(j=0;j<=h;j++)
    dp[i][j]=i*j;


    for(i=0;i<n;i++)
    {cin>>j>>k;
    dp[j][k]=0;}

    for(i=0;i<=w;i++){
        for(j=0;j<=h;j++){
            for(k=0;k<=i;k++)
                dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]);
            for(k=0;k<=j;k++)
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]);
        }
    }
    cout<<dp[w][h]<<endl;
    }

    return 0;
}




























