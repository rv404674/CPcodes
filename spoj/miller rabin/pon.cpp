//miller rabin primality testing

#include<iostream>
#include<stdlib.h>
using namespace std;

typedef long long lli;
#define debug cout<<"debug\n";

lli mulmod(lli a,lli b,lli c){
lli res=0;
a=a%c;
while(b>0){
    if(b&1) res=(res+a)%c;
    b=b>>1;
    a=(a*2)%c;
}
return res%c;
}


lli modulo(lli a,lli b,lli c){
lli res=1;
while(b>0){
    if(b&1) res=mulmod(res,a,c);
    b=b>>1;
    a=mulmod(a,a,c);
}
return res%c;
            }



bool millerabin(lli p,lli itr){
if(p<2) return false;
if(p!=2 && p%2==0) return false;

lli s=p-1;
while(s%2==0) s/=2;


for(lli i=1;i<=itr;i++){
lli a=rand()%(p-1)+1;lli temp=s;
lli mod=modulo(a,temp,p);


while(temp!=p-1 && mod!=1 && mod!=p-1){
mod=mulmod(mod,mod,p);
temp*=2;
}
if(mod!=p-1 && temp%2==0)
    return false;
  }


return true;
}




int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    lli t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        
       // debug;
        if(millerabin(n,20)) cout<<"YES\n";//20 is number of iterations
        else cout<<"NO\n";
        
    }
    return 0;
}
