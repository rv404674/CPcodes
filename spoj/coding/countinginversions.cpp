
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
#define small

long int mergen(long int *a,long int p,long int q,long int r){
long int cnt,n1,n2,i,j,k;
n1=q-p+1;
n2=r-q;
cnt=0;
long int *b=new long int[n1+1];
long int *c=new long int[n2+1];
for(i=0;i<n1;i++)
b[i]=a[p+i];
for(j=0;j<n2;j++)
c[j]=a[q+j+1];
b[n1]=10000000;
c[n2]=10000000;

i=j=0;
for(k=p;k<=r;){
if(b[i]<c[j])
a[k++]=b[i++];
else
{a[k++]=c[j++];
cnt=cnt+(n1-i);
}

}

return cnt;
}





long int mergesort(long int *a,long int p,long int r){
if(r>p)
{

long int cnt,q;
q=floor((p+r)/2);
cnt=0;
cnt=mergesort(a,p,q);
//cout<<"cnt1-"<<cnt<<endl;

cnt+=mergesort(a,q+1,r);
cnt+=mergen(a,p,q,r);
return cnt;
}
else return 0;
}


 int main(){
ios_base::sync_with_stdio(false);

#ifdef small
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif // small

long int  n,i,x,y,t;

cin>>n;
long int a[n];
for(i=0;i<n;i++) cin>>a[i];
cin>>t;
while(t--)
{cin>>x>>y;
a[x-1]=y;
cout<<mergesort(a,0,n-1)<<endl;
}
return 0;
}
