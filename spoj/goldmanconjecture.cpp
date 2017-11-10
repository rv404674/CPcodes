#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;


void goldman(int *prime,int n){
    int i,res;
    for(i=2,res=0;i<=n/2;i++)
        if(prime[i] && prime[n-i])
            res++;
    cout<<res;
            }

void sieve(int n){
int prime[n+1];
//memset(prime,1,sizeof(prime));
for(int i=0;i<n+1;i++) prime[i]=1;

for(int i=2;i<=sqrt(n);i++)
    if(prime[i]==1)
        for(int j=i*i;j<=n;j+=i)
            prime[j]=0;

goldman(prime,n);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int a,n;
    cin>>n;
    sieve(n);
    return 0;
}
