#include<iostream>
#include<cmath>

using namespace std;

typedef long long lli;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli t,k,i,temp,n,ans,l;
    lli a[100];

    cin>>t;
    while(t--){
        cin>>k;
        temp=n=0;

        //n denotes length
        while(temp<k){
            n+=1;
            temp=pow(2,n+1)-2;
        }

       // cout<<"n temp "<<n<<" "<<temp;

       temp=pow(2,n)-2;
      ans=k-temp;
     ans=ans-1;//we subtract one and then convert into binary and replace 0 with 5 and 1 with 6

     //cout<<"ans "<<ans;

     l=0;
     while(ans>0){
         a[l++]=ans%2;
         ans/=2;
     }

    //cout<<"l "<<l<<endl; 
     for(;l<n;l++)
         a[l]=0;
    

for(i=l-1;i>=0;i--)
    if(a[i]==0) cout<<5;
    else cout<<6;
cout<<endl;
    }
    return 0;
}








     

