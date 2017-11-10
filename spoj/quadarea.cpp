#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        int t;
    double a,b,c,d,s,area;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        s=(a+b+c+d)*1.0/2.0;
        a=sqrt( (s-a)*(s-b)*(s-c)*(s-d) );
        cout<<setprecision(2)<<fixed<<a<<endl;
    }
    return 0;
}
