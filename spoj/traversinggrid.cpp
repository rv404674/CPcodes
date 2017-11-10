#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long int t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n<=m){
            if(n%2==0)
                cout<<"L\n";
            else cout<<"R\n";
        }
        else{
            if(m%2==0)
                cout<<"U\n";
            else cout<<"D\n";
        }
    }
    return 0;
}
