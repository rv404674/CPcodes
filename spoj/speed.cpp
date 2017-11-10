#include<iostream>
#include<cmath>
using namespace std;

int gcd( int a, int b){
    if(b==0)
        return a;
    else return gcd(b,a%b);
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
     int a,b,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<abs(a-b)/abs(gcd(a,b))<<endl;
    }
    return 0;
}
