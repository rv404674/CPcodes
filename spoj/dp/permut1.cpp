#include<iostream>
#include<string.h>

using namespace std;

int dp[13][99];

int count(int n,int k){
    if(n==0) return 0;
    if(k==0) return 1;

    if(dp[n][k]!=-1) return dp[n][k];

    int val=0;
    for(int i=0;i<n && k-i>=0;i++)
        val+=count(n-1,k-i);

    return dp[n][k]=val;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int d,n,k;
    cin>>d;
    while(d--){

        memset(dp,-1,sizeof(dp));
        cin>>n>>k;
        cout<<count(n,k)<<endl;
        }
    return 0;
}
        
