
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
int bud,n,i,j,ans;

while(1){
    cin>>bud>>n;
    int dp[n+1][bud+1];
//dp[i][j]=indicates fun from ith party having cost j

    int cost[n],fun[n];
    for( i=0;i<n;i++)
        cin>>cost[i]>>fun[i];

    for(i=0;i<=n;i++) dp[i][0]=0;
    for(i=0;i<=bud;i++) dp[0][i]=0;

    for(i=1;i<=n;i++)
        for(j=1;j<=bud;j++){
            if((j-cost[i-1])<0)
                dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],fun[i-1]+dp[i-1][j-cost[i-1]]) ;
                    }

                    for(i=0;i<=bud;i++)
                    if(dp[n][i]==dp[n][bud])
                    { ans=i;
                    break;
                    }
                    
                    cout<<ans<<dp[n][bud]<<endl;
                    }
return 0;
}
                    
