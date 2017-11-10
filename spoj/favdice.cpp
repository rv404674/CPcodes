#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,t,i;
    float sum;
    cin>>t;

    while(t--){
        cin>>n;
        sum=0;
        for(i=1;i<=n;i++)
             sum+=1.0/i;
        sum=sum*1.0*n;
        cout<<setprecision(2)<<fixed<<sum<<endl;//to print number after decimal
    }
    return 0;
}
