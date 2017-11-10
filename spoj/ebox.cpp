#include<iostream>
using namespace std;

typedef long long lli;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli n,k,l,y,f,x,t;

    cin>>l;
    while(l--){
        cin>>n>>k>>t>>f;
        x=n+(k*(f-n))/(k-1);
        cout<<x<<endl;
    }
    return 0;
}
