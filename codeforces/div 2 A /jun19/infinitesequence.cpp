#include<iostream>
#include<cmath>
using namespace std;

typedef long long lli;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli a1,b,d;

    cin>>a>>b>>d;

    double x= (b*1.0+d-a)/d*1.0 ;

    if(d==0) a==b?cout<<"YES\n":cout<<"NO\n";
    else if( x<=0) cout<<"NO\n";
    else if( floor(x)==x) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
