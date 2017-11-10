#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int l,b,x,left,total;

    cin>>l>>b;
    left=(b%2)*l;
    total=(b/2)*l+(left/2);
    cout<<total;
    return 0;
}
