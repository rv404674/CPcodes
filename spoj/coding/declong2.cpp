#include<iostream>
#include<stdio.h>
using namespace std;


long int gcd(long int a,long int b){
if(b%a==0){
cout<<a<<" ";
return a;
}
else
gcd(b%a,a);

}

#define small
int main(){
ios_base::sync_with_stdio(false);

#ifdef small
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif // small

long int t,n,i,j,k,x;
long int a[100000],b[100000];
cin>>t;

while(t--){
cin>>n;

for(i=0;i<n;i++)
cin>>a[i];

for(i=0;i<n;i++)b[i]=0;

for(i=0;i<n-1;i++)
if( gcd(a[i],a[i+1])>1 )
  b[i]=b[i+1]=1;

k=0;
for(i=0;i<n;i++)
if(b[i]==1)
k++;
cout<<k<<endl;

}
return 0;
}
