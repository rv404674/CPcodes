#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
//#define small


int pairs(int *y,int *noofy,int n,int x){
if(x==0)
return 0;
if(x==1)
return noofy[0];
int *ptr=upper_bound(y,y+n,x);
int ans=y+n-ptr;

ans+=noofy[0]+noofy[1];
if(x==2)
ans-=(noofy[3]+noofy[4]);
if(x==3)
ans+=noofy[2];
return ans;
}


void noofpairs(int *x,int *y,int m,int n){
int noofy[5]={0};
int i;
for(i=0;i<n;i++)
if(y[i]<5)
noofy[y[i]]++;

sort(y,y+n);
int total=0;
for(i=0;i<m;i++)
total+=pairs(y,noofy,n,x[i]);

cout<<total<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
#ifdef small
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


int t,m,n,c,i,j;
cin>>t;
while(t--){
cin>>m>>n;
int a[m],b[n];
for(i=0;i<m;i++) cin>>a[i];
for(i=0;i<n;i++) cin>>b[i];

noofpairs(a,b,m,n);
}


return 0;
}
