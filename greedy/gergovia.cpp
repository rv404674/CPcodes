#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long int n,i,buyer,seller,trans,x,total;

    while(1)
    {cin>>n;
        if(n==0) break;

        long long int a[n];
        for(i=0;i<n;i++) cin>>a[i];

        seller=buyer=total=0; 
        
        while(1){
        while(seller<n && a[seller]>=0) seller++;
        while(buyer<n && a[buyer]<=0) buyer++;

        if(seller==n || buyer==n) break;

        trans=min(a[buyer],-a[seller]);
      
      // cout<<"trans "<<trans<<endl;

        total+=trans*fabs(seller-buyer);
       // cout<<total<<endl;
        a[buyer]-=trans;
        a[seller]+=trans;
        }

        cout<<total<<endl;
    }
return 0;
}
