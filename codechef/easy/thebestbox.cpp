#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,p,s;
    double v,v1,v2,x,i;
    cin>>t;
    while(t--){
        cin>>p>>s;
        v1=p-sqrt(p*p-24*s);
        v1/=12.0;
        
        v2=p+sqrt(p*p-24*s);
        v2/=12.0;

        v1=(v1*s)/2.0-(v1*v1*p)/4.0+v1*v1*v1;
        v2=(v2*s)/2.0-(v2*v2*p)/4.0+v2*v2*v2;
        v=v1>v2?v1:v2;
        cout<<fixed<<setprecision(2)<<v<<endl;
    }
    return 0;
}
