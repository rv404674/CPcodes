#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int t,i,n;
ios_base::sync_with_stdio(false);cin.tie(NULL);
cin>>t;

while(t--){
cin>>n;
int k=n;
while(n>8)
n%=8;
if(n==1)
cout<<k+3<<"LB\n";
else if(n==2)
  cout<<k+3<<"MB\n";
else if(n==3)
cout<<k+3<<"UB\n";
else if(n==4)
cout<<k-3<<"LB\n";
else if(n==5)
cout<<k-3<<"MB\n";
else if(n==6)
cout<<k-3<<"UB\n";
else if(n==7)
cout<<k+1<<"SU\n";
else
cout<<k-1<<"SL\n";

}
return 0;
}

