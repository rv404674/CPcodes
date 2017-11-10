#include<iostream>
#include<cmath>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long int t,n,m,k,x;
         cin>>t;
    while(t--){
        cin>>n>>k>>m;
        if(n>m)
            cout<<0<<endl;
        else{
        x=m/n;
        x=floor(log2(x)/log2(k));
        cout<<x<<endl;
    }
    }
    return 0;
}


