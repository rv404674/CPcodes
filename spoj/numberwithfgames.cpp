#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long long int a;
    cin>>a;
    if(a%10==0) cout<<2<<endl;
    else cout<<1<<endl<<a%10<<endl;//if there are many ways output one of them 

    return 0;
}

