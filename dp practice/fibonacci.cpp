#include<iostream>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

int a,b,n,i,j;
int dp[1000];
cin>>a;
while(a--){
cin>>n;
if(n==0 || n==1)
cout<<0<<endl;
else{
dp[0]=0;
dp[1]=dp[2]=1;

for(i=3;;i++){
dp[i]=dp[i-1]+dp[i-2];
if(dp[i]==n)
cout<<0<<endl;
else if(dp[i]>n) break;
}

if(dp[i]-n < n-dp[i-1])
	cout<<dp[i]-n<<endl;
else 
	cout<<n-dp[i-1]<<endl;
}


}
return 0;


}
