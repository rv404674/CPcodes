#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a[3],b[3],cup,med,x,i,n;

    for(i=cup=med=0;i<3;i++){cin>>x;cup+=x;}

    for(i=0;i<3;i++){cin>>x;med+=x;}
    cin>>n;
     x=ceil(cup*1.0/5*1.0)+ceil(med*1.0/10*1.0);
    if(x>n) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}
