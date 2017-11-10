#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

int n,taxi,l,r,i;
cin>>n;
int a[n];
for(i=0;i<n;i++) cin>>a[i];

sort(a,a+n);
l=0;r=n-1;

taxi=0;
while(l!=r){
    if(a[l]+a[r]<=4){
        a[r]+=a[l];
        l++;}
    else{
        r--;
        taxi++;
    }
}
cout<<taxi+1<<endl;
return 0;
}
