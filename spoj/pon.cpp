#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,flag;
    long long int n,i;
    cin>>t;
    while(t--){
        cin>>n;
  flag=1;

        for(i=2;i*i<=n;i++)
            if(n%i==0)
            {cout<<"NO\n";flag=0;break;}
        

        if(flag==1) cout<<"YES\n";
    
    
    }
    return 0;
}
