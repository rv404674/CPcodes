//see http://www.algorithmist.com/index.php/SPOJ_PARTY

#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,c,i,ans,j,bud;
    while(1){
        cin>>bud>>n;
        if(n==0 && bud==0)
            break;

        int cost[n],fun[n];
        for(i=0;i<n;i++)
            cin>>cost[i]>>fun[i];

        int dp[n+1][bud+1];
        for(i=0;i<=n;i++)
            dp[i][0]=0;
        for(i=0;i<=bud;i++)
            dp[0][i]=0;

        //i represnts parties 
        for(i=1;i<=n;i++)
            for(j=1;j<=bud;j++){
                if(cost[i-1]>j)//i-1 because cost array has value from index 0
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=max(dp[i-1][j],fun[i-1]+dp[i-1][j-cost[i-1]]);//similarly for fun also
            }

        for(i=0;i<=bud;i++)
            if(dp[n][i]==dp[n][bud]){
                ans=i;
                break;}

            cout<<ans<<" "<<dp[n][bud]<<endl;
        }
    return 0;
}
