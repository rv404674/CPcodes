#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long int t,n,i,j;

    t=1;
    while(1){
        cin>>n;
        if(n==0) break;
        long long int a[n][3],dp[n][3];

        for(i=0;i<n;i++)
            for(j=0;j<3;j++)
                cin>>a[i][j];
        dp[0][0]=dp[0][1]=dp[0][2]=0;
        dp[1][0]=a[0][1]+a[1][0];
        dp[1][1]=min( a[0][1]+a[1][0],min(a[0][1],a[0][1]+a[1][0]))+a[1][1];
        dp[1][2]=min( a[0][1]+a[1][1],min(a[0][1],min(a[0][1]+a[0][2],dp[1][1]) ) )+a[1][2];

     //   cout<<dp[1][0]<<" "<<dp[1][1]<<" "<<dp[1][2]<<endl;
        for(i=2;i<n;i++){
            for(j=0;j<3;j++){
                if(j==0)
                    dp[i][j]=min(dp[i-1][j],dp[i-1][j+1])+a[i][j];
                else if(j==1)
                    dp[i][j]=min( dp[i][j-1],min(dp[i-1][j],min(dp[i-1][j+1],dp[i-1][j-1])  ) )+a[i][j];
                else
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1] ) )+a[i][j];
            //cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
            }
            
        }
        cout<<t++<<". "<<dp[n-1][1]<<endl;
    }
    return 0;
}
        
