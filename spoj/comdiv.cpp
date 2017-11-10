#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

long int prime[100002];
bool check[1000009];

void sieve(){
    memset(check,true,sizeof(check));
    long int i,j;

    for(i=2;i*i<=1000000;i++){
        if(check[i]==true)
            for(j=i*i;j<=1000000;j+=i)
                check[j]=false;
    }

    long int k=0;
    for(i=2;i<=1000000;i++)//you can also do i+=2 
        if(check[i]==true)
            prime[k++]=i;
    }
  
    
    int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long int t,m,n,i,cnt,gcd,res;
    cin>>t;
    sieve();

    while(t--){
        res=1;
        cin>>m>>n;
        gcd=__gcd(m,n);
 
        if(gcd==1)
            cout<<1<<endl;
        else
        {
            for(i=0;i<=78500 && prime[i]<=gcd;i++){
                long int cnt=0;
                
                while(gcd%prime[i]==0){
                    cnt++;
                    gcd/=prime[i];
                }
                res*=(cnt+1);

            }
                    
            if(gcd>1) res*=2;//think logically ,gcd=74
                cout<<res<<endl;
        }
    }
        
    
    return 0;
}

