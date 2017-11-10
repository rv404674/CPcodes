#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    long int n,i,t,j;
	cin>>t;
	for(i=1;i<=t;i++){
   cin>>n;

   long long int a[n],dp[n];
   for(j=0;j<n;j++) cin>>a[j];
   	dp[0]=a[0];dp[1]=max(dp[0],a[1]);

   for(j=2;j<n;j++)
   	dp[j]=max(dp[j-1],dp[j-2]+a[j]);
   cout<<"Case "<<i<<":"<<" "<<dp[n-1]<<endl;

	}
return 0;
}