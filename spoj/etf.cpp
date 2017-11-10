#include<iostream>
using namespace std;
void goldman(int *prime,int n){
    int i,res;
    for(i=2;i<=n/2;i++)
        if(prime[i] && prime[n-i])
            res++;
    cout<<res;
            }


int etf(int n){
    int res=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            res-=res/i;
        while(n%i==0) n/=i;
    }
    if(n>1)
        res-=res/n;
    return res;
    }

int main(){
    ios_base::sync_with_stdio(false);

    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<etf(n)<<endl;
        }
    return 0;
}
