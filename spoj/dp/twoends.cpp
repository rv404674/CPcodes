#include<iostream>
#include<string.h>
using namespace std;

int dp[1001][1001];
int a[1001];

int dptwoend(int l,int h){
if(l>h) return 0;
if(dp[l][h]!=-1) return dp[l][h];

return dp[l][h]=
    max(a[l+1]>=a[h]?a[l]+dptwoend(l+2,h):a[l]+dptwoend(l+1,h-1)
            ,a[l]>=a[h-1]?a[h]+dptwoend(l+1,h-1):a[h]+dptwoend(l,h-2));
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int cnt,n,sum,ans,i;
    cnt=0;

    while(1){
        cnt++;
        cin>>n;
        if(n==0) break;

        ans=sum=0;

        memset(dp,-1,sizeof(dp));
        for(i=0;i<n;i++) {cin>>a[i];sum+=a[i];}
        ans=dptwoend(0,n-1);
        
        cout<<"In game "<<cnt<<", the greedy strategy might lose by as many as "<<2*ans-sum<<" points.\n";

    }

    return 0;
}

