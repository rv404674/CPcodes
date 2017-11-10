#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,m,k,i,j,dpmn;

    cin>>n>>m;
    int dp[n][m],a[n][m];
    
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];

    for(i=0;i<n;i++)
        dp[0][i]=a[0][i];
    
    for(i=1;i<n;i++)
        for(j=0;j<m;j++)
        {if(j-1<0)
            dp[i][j]=min(dp[i-1][j],dp[i-1][j+1])+a[i][j];
            else if(j+1>=m)
                dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+a[i][j];
            else
            dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]) )+a[i][j];
        }

        dpmn=99999;
        for(i=0;i<m;i++)
            if(dp[n-1][i]<dpmn) dpmn=dp[n-1][i];
        cout<<dpmn<<endl;
    

    return 0;
}

