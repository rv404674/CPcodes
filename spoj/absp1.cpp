#include<iostream>
using namespace std;

typedef long long lli;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli sum,n,t,i;
    cin>>t;

    while(t--){
        cin>>n;
        lli a[n];
        for(i=0;i<n;i++) cin>>a[i];
            
        for(i=sum=0;i<n;i++)
            sum+=(a[n-i-1]-a[i])*(n-i-1);
        cout<<sum<<endl;
    }
    return 0;
}
