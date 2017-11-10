#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long n,m,a,sum;
    cin>>n>>m>>a;

    if(n==1 && m==1) cout<<1<<endl;
    else {
        sum=ceil(m*1.0/a*1.0)*ceil(n*1.0/a*1.0);
        cout<<sum<<endl;
    }
    return 0;
}
