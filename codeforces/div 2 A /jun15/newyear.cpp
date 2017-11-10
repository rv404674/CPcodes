#include<iostream>
using namespace std;

typedef long li;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a,b,rem;
    li total=rem=0;
    cin>>a>>b;
    total=a;
    while(a>=b){
   int  div=a/b;
    total+=div;
    rem=a%b;
    a=(div+rem);
    }

    cout<<total<<endl;
    return 0;
}
