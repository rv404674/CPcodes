#include<iostream>
using namespace std;

typedef long long lli;
#define mod 10000007;

lli modular(lli a,lli b){
    lli res=1;
    while(b>0){
        if(b&1) res=(res*a)%mod;
        b=b/2;
        a=(a*a)%mod;
    }
    return res%mod;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli n,k,sum;
    while(1){
        cin>>n>>k;
        if(n==0 && k==0) break;
        sum=(2*modular(n-1,k)+modular(n,k)+modular(n,n)+2*modular(n-1,n-1))%mod;
    cout<<sum<<endl;
    }
    return 0;
}
