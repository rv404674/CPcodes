#include<string.h>
#include<iostream>
#include<math.h>

using namespace std;
long long int n=1000000;
long long int sieve[1000001];

void segsieve(){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    long long int i,j,k;
    
    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*i;j<=n;j+=i) 
                prime[j]=false;
        }
            }
k=0;
    for(i=2;i<=n;i++)
        if(prime[i]==true)
        sieve[k++]=i;
}

int issquare(long long int x){
    for(long long int i=0;sieve[i]*sieve[i]<=x;i++)
        if(x%sieve[i]==0){
            int c=0;
            while(x%sieve[i]==0){
                x/=sieve[i];
                c++;}
            
            if( (sieve[i]-3)%4==0 && (c&1)) return 0;
        }

if(x>1 && (x-3)%4==0) return 0;///we didn't do c&1 because this is remaining number and remaining number has power 1
return 1;
    }


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long int t,x;
    segsieve();
    cin>>t;
    while(t--){
        cin>>x;
     if(issquare(x)) cout<<"Yes\n";
     else cout<<"No\n";
    }
    return 0;
}















