#include<algorithm>
#include<iostream>

typedef long li;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    li t,n,i,x;

    long long int sum,sum1,sum2;

    cin>>n;
    li a[n],b[n-1],c[n-2];
    for(i=sum=sum1=sum2=0;i<n;i++) {cin>>x;sum+=x;}
    for(i=0;i<n-1;i++) {cin>>x;sum1+=x;}
    for(i=0;i<n-2;i++) {cin>>x;sum2+=x;}

    cout<<sum-sum1<<endl;
    cout<<sum1-sum2<<endl;

    return 0;
}
