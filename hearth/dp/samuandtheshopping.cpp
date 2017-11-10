#include<iostream>
using namespace std;

long long int a[100000][3];
long long int dp[100000][3];



int main(){
long int i,t,n,j,k;
ios_base::sync_with_stdio(false);cin.tie(NULL);
cin>>t;

while(t--){
cin>>n;
for(i=0;i<n;i++)
for(j=0;j<3;j++)
	cin>>a[i][j];

for(i=0;i<3;i++)
	dp[0][i]=a[0][i];

for(i=1;i<n;i++){
dp[i][0]=min(dp[i-1][1],dp[i-1][2])+a[i][0];
dp[i][1]=min(dp[i-1][0],dp[i-1][2])+a[i][1];
dp[i][2]=min(dp[i-1][0],dp[i-1][1])+a[i][2];
}

k=min(min(dp[n-1][0] ,dp[n-1][1]),dp[n-1][2]);
cout<<k<<endl;
}
return 0;

}