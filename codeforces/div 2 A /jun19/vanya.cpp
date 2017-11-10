#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int n,sum,d,i,cnt;
    cin>>n;
    d=n,sum=cnt=0;

while(d){
    d/=10;
    cnt++;}

sum=(n-pow(10*1LL,cnt-1)+1)*cnt*1LL;
while(cnt--){
    sum+=(pow(10*1LL,cnt)-pow(10*1LL,cnt-1))*cnt*1LL;
}

    cout<<sum;
    return 0;
}
