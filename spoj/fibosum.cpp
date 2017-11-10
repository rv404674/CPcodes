#include<iostream>
using namespace std;
long long int  mod=1000000007;


void mul(long long int f[2][2],long long int m[2][2]){
    //dont directly write 
    // f[0][0]= ( (f[0][0]*m[0][0])%mod+(f[0][1]*m[1][0])%mod )%mod;
    //or else contents of original matrix will change
    long long int x,y,z,w;
    x= ( (f[0][0]*m[0][0])%mod+(f[0][1]*m[1][0])%mod )%mod;
    y=( (f[0][0]*m[0][1])%mod + (f[0][1]*m[1][1])%mod )%mod;
    z=( (f[1][0]*m[0][0])%mod + (f[1][1]*m[1][0])%mod )%mod;
    w=( (f[1][0]*m[0][1])%mod + (f[1][1]*m[1][1] )%mod )%mod;

f[0][0]=x;
f[0][1]=y;
f[1][0]=z;
f[1][1]=w;
}

long long fib(long long int n){
    long long int ans[2][2]={{1,0},{0,1}};//identity matrix
    long long int f[2][2]={{1,1},{1,0}};
 //to do multiplication in log(n) use fast matrix exponentiation
    while(n>0){
        if(n&1)
            mul(ans,f);
        n/=2;
        mul(f,f);
    }
 
    return ans[0][1];

}

long long int sumfib(long long int a){
    return fib(a+2)-1 ;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        long long int t,m,n,i,j,sum;
cin>>t;
    while(t--){
        cin>>m>>n;
       j=sumfib(n)-sumfib(m-1);
       //cout<<sumfib(n)<<" "<<sumfib(m-1)<<endl;
       if(j<0) j+=mod;
       j=j%mod;
       cout<<j<<endl;
    }
    return 0;
}
      
