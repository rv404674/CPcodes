#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long int a;

    cin>>a;
    if(a%3==0 || a%6==1) cout<<"yes\n";
    else cout<<"no\n";
    return 0;
}
