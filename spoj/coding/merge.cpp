#include<iostream>
#include<math.h>
using namespace std;


void mergen(int *a,int p,int q,int r){
int cnt,n1,n2,i,j,k;
n1=q-p+1;
n2=r-q;
cnt=0;
int b[n1+1];
int c[n2+1];
/*
int *b=new int[n1+1];
int *c=new int[n2+1];*/
for(i=0;i<n1;i++)
b[i]=a[p+i];
for(j=0;j<n2;j++)
c[j]=a[q+j+1];
b[n1]=1000000;
c[n2]=1000000;

i=j=0;
for(k=p;k<=r;){
if(b[i]<=c[j])
a[k++]=b[i++];
else
a[k++]=c[j++];
}

}





void mergesort(int *a,int p,int r){
if(p<r)
{
int cnt,q;
q=floor((p+r)/2);
cnt=0;
mergesort(a,p,q);
mergesort(a,q+1,r);
mergen(a,p,q,r);
}

}

int main(){
int *a,n,i,k,t;

cin>>t;

while(t--){
cin>>n;
int a[n];
for(i=0;i<n;i++) cin>>a[i];
mergesort(a,0,n-1);
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}

return 0;



}
