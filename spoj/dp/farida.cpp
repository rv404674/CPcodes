#include<iostream>
#include<stdlib.h>
using namespace std;

long long int mx(long long int a,long long int b){
	return a>b?a:b;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long int n,j,t,i;

cin>>t;

for(j=1;j<=t;j++){
cin>>n;
long long int a[n],dp[n];

for(i=0;i<n;i++) cin>>a[i];

dp[0]=a[0];
dp[1]=mx(a[0],a[1]);

for(i=2;i<n;i++)
dp[i]=mx(dp[i-2]+a[i],dp[i-1]);
	
cout<<"Case "<<j<<": "<<dp[n-1]<<endl;
}

return 0;
}