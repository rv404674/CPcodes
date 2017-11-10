#include<iostream>
using namespace std;

typedef long long lli;

lli dp[65][10];

void precomputedp(){
    lli i,j,k;

    for(i=0;i<10;i++)
        dp[0][i]=1;//this somewhat confusing
    
    for(i=1;i<65;i++){
        for(j=0;j<10;j++){
            for(k=0;k<=j;k++)
                dp[i][j]+=dp[i-1][k];
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli t,i,n,x;
    precomputedp();

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>x>>n;
        cout<<i<<" "<<dp[n][9]<<endl;
    }
    return 0;
}


