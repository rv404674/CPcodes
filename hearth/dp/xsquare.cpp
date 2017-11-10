 #include<iostream>
using namespace std;

int main(){
	int n,q,i,j;
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin>>n>>q;
	long long int sum,a[n],b[n],r,l,k;
	for(i=0;i<n;i++) cin>>a[i];
    for(j=0;j<n;j++) cin>>b[j];
    	sum=0;
     while(q--){
     	cin>>k>>l>>r;
     	if(k==1){
     		for(i=l-1;i<r;i+=2) sum+=a[i];
     		for(j=l;j<r;j+=2) sum+=b[j];
     			cout<<sum<<endl;
     		sum=0;
     			}
     	else{
     		for(i=l-1;i<r;i+=2) sum+=b[i];
     		for(j=l;j<r;j+=2) sum+=a[j];
     			cout<<sum<<endl;
     		sum=0;
     		     	}		
          }
return 0;
}