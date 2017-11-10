#include<iostream>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long int n,i,one,zero;

    cin>>n;
    char ch;

    for(i=zero=one=0;i<n;i++){
        cin>>ch;
        if(ch=='0') zero++;
        else one++;
    }
    cout<<one+zero-2*min(one,zero)<<endl;
    return 0;
}
