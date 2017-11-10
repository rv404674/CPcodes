#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int mcm(int *p,int n){
int dp[n][n],i,j;

for(i=1;i<n;i++) dp[i][i]=0;

for(int l=2;l<n;l++){
    for(i=1;i<n-l+1;i++){
        j=i+l-1;
        dp[i][j]=INT_MAX;
        for(int k=i;k<j;k++){
            int q=dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j];
            if(q<dp[i][j])
                dp[i][j]=q;
        }
    }
}
return dp[1][n-1];
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];

    cout<<mcm(a,n);
    return 0;
}

