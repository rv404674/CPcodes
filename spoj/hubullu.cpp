#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long int t,n,s;
    cin>>t;
    while(t--){
       cin>>n>>s;
       if(!s) cout<<"Airborne wins."<<endl;
       else cout<<"Pagfloyd wins."<<endl;
    }
    return 0;
}
