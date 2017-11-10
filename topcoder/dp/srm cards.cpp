#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t,n,k,i,j;
	ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		k=0;

		for(i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);	

			for(i=0;i<n;i++){
        if(a[i]+1 == a[i+1])
        	i++;
           k++;
			}
			cout<<k<<endl;
	}
	return 0;
}