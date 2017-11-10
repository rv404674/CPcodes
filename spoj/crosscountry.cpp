#include<iostream>
#include<string>

using namespace std;
int a[2001],b[2001];

int lcs(int m,int n){
    int i,j,dp[m+1][n+1];

for(i=0;i<=m;i++)
    for(j=0;j<=n;j++){
        if(i==0 || j==0)
            dp[i][j]=0;//if any string has len 0 then length of lcs of both strings will be zero
        else if(a[i-1]==b[j-1])//note
            dp[i][j]=1+dp[i-1][j-1];
        else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
return dp[m][n];
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
int t,m,n,x;
cin>>t;

while(t--){
    m=0;
    while(1){
        cin>>x;
        if(x==0) break;
        a[m++]=x;
    }
    
int mx=-1;
    while(1){
n=0;
    while(1){
        cin>>x;
       if(x==0) break;
  b[n++]=x;}

    if(n==0) break;
    mx=max(mx,lcs(m,n));
    }
    cout<<mx<<endl;
}

return 0;
}
