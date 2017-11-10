#include<iostream>
#include<climits>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int q,n,a[3],i,j;
	cin>>n;
	for(i=0;i<3;i++) cin>>a[i];
        int maxlen[n+1];

	maxlen[0]=0;

for(i=1;i<=n;i++){
q=INT_MIN;
for(j=0;j<3;j++){
	if(a[j]<=i)
		q=max(1+maxlen[i-a[j]],q);}
maxlen[i]=q;
}
cout<<maxlen[n]<<endl;
return 0;
}
	

