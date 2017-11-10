#include<iostream>
using namespace std;

typedef long long lli;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli t,n,i,sum,x;

        cin>>n;
        for(i=sum=0;i<n;i++) {cin>>x;sum+=x;}
        x=n*(n+1)/2;
        if(x==sum) cout<<"YES\n";
        else cout<<"NO\n";
    return 0;
}
