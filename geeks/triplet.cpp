#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
//#define small

int main(){
ios_base::sync_with_stdio(false);
#ifdef small
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int a,t,n,sum,i,j,k;
cin>>t;
while(t--)
{
cin>>n>>sum;
int a[n];
for(i=0;i<n;i++) cin>>a[i];

sort(a,a+n);
k=0;

for(i=0;i<n;i++){
k=sum-a[i];
for(j=i+1;j<n;j++)
{
if(binary_search(a+j+1,a+n,k-a[j]))
{cout<<"1"<<endl;
break;
}
  }
if(j!=n)
break;
}
if(i==n)
cout<<"0"<<endl;
}

return 0;
}

