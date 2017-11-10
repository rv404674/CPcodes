#include<iostream>
#include<string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int l,i,k;
	string s;
	cin>>s;
	l=s.size();
	int dp[l];
	
	for(i=0;i<l;i++) dp[i]=0;
	if((s[l-1]-'0')%2==0) dp[0]=1;
	else dp[0]=0;

     k=0;
	for(i=l-2;i>=0;i--)
	{
		if( (s[i]-'0')%2 == 0)
          dp[++k]=dp[k-1]+1;
      else dp[++k]=dp[k-1];
      
	}

	for(i=l-1;i>=0;i--)
		cout<<dp[i]<<" ";
	cout<<endl;
	return 0;
}