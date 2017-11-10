#include<iostream>
#include<stdio.h>
using namespace std;
//#define small

int main(){
ios_base::sync_with_stdio(false);
#ifdef small
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

long long int n,i,j,mx,mx1,k,t;
cin>>t;
while(t--){
cin>>n;
long long int a[n][n];
 for(i=0;i<n;i++)
 for(j=0;j<2;j++)
    cin>>a[i][j];

mx=mx1=-1;
for(i=0;i<n;i++){
if(a[i][0]>mx)
    {mx=a[i][0];k=i;}
    }


for(i=0;i<n;i++){
if(a[i][1]>mx1  && i!=k)
    {mx1=a[i][1];}
    }

if(mx>mx1)
  cout<<k+1<<endl;
else
cout<<"-1\n";

}
return 0;

}
