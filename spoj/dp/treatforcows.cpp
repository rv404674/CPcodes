#include<string.h>
#include<iostream>
using namespace std;

int p[2000];
int dp[2000][2000];

int findtreat(int yr,int beg,int end){
    if(beg>end) return 0;
    else if(dp[beg][end]!=-1)
        return dp[beg][end];
    else 
        return dp[beg][end]=max(findtreat(yr+1,beg+1,end)+yr*p[beg],findtreat(yr+1,beg,end-1)+yr*p[end]);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>p[i];
    memset(dp,-1,sizeof(dp));
    cout<<findtreat(1,0,n-1);
    return 0;
}
