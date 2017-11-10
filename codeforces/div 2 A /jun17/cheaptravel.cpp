#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,x,total,m,a,b;

    total=0;
    cin>>n>>m>>a>>b;
    cout<<min(n*a,(n/m)*b+min((n%m)*a,b));
    return 0;
}
