#include<iostream>
#include<stdio.h>
#include<limits.h>

int a[101];

int sum(int x,int y){
    int s=0;
    for(int i=x;i<=y;i++)
        s=(s+a[i])%100;
    return s ;
}

using namespace std;
int main(){
    int t,n,l,i,j,k,dp[105][105],csum[105][105];
   
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++) cin>>a[i];

        for( i=0;i<n;i++) dp[i][i]=0;

        for(l=2;l<=n;l++)
         for(i=0;i<n-l+1;i++)
            { 
                j=i+l-1;
            dp[i][j]=INT_MAX;
            
            for(k=i;k<j;k++)
            {
            
                int q=dp[i][k]+dp[k+1][j]+sum(i,k)*sum(k+1,j);
            if(q<dp[i][j])
                dp[i][j]=q;
                    
            }
                    }           
                    

        cout<<dp[0][n-1]<<endl;
    }
    return 0;
}
