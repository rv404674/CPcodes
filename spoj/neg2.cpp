#include<iostream>
using namespace std;

typedef long long lli;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli n,k,i;

    int a[1000],rem;
    k=0;
    
    cin>>n;
    while(n){
        a[k++]=rem=n%-2;
       n=n/-2;
       if(rem<0){//remainder cant be negative as there can be only 0 and 1 in binary conversion of a number
           a[k-1]+=2;
           n+=1;
       }
    }
    if(k==0) cout<<0<<endl;
    else{
    for(i=k-1;i>=0;i--)
        cout<<a[i];
cout<<endl;
    }

    

    return 0;
}
