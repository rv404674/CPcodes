#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int lli;

lli gcd(lli a,lli b){
    if(a==0) return b;
    else return gcd(b%a,a);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli i,t,n,x,cnt;
         cin>>n;
        lli a[n];

        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);

        lli val[n-1];
        for(i=0;i<n-1;i++)
            val[i]=a[i+1]-a[i];
        
x=val[0];
        for(i=1,cnt=0;i<n-1;i++)
            x=gcd(x,val[i]);
       // cout<<x<<endl;
        
        for(i=0;i<n-1;i++)
            cnt+=(val[i]/x-1);
        cout<<cnt<<endl;
    
    return 0;
}
