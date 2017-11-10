#include<iostream>
#include<cmath>

using namespace std;

typedef long long int lli;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    lli t,n,x;

    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            if(n%4==0)
            {x=floor(n/2)-1;cout<<x<<endl;}
            else 
            {x=floor(n/2)-2;cout<<x<<endl;}
    }
        else {x=floor(n/2);cout<<x<<endl;}

    }
    return 0;
}
        
