#include<iostream>
using namespace std;

long long int gcd(long long int a,long int b){
if(b%a==0) return a;
return gcd(b%a,a);}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long int a,b,c,i,t;
    cin>>t;

    for(i=1;i<=t;i++){
        cin>>a>>b>>c;
        if(c%gcd(a,b) ==0)
            cout<<"Case "<<i<<": Yes\n";
        else
            cout<<"Case "<<i<<": No\n";

    }
    return 0;
}
