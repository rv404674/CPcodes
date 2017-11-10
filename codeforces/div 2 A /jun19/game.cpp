#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n1,n2;

    cin>>n1>>n2;
    if(n1>n2) cout<<"First\n";
    else cout<<"Second\n";
    return 0;
}
