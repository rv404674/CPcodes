#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;
#define small

int main(){
ios_base::sync_with_stdio(false);
#ifdef small
freopen("input","r",stdin);
#endif // small

 vector < pair<long int ,long int> >v;
long int *a,*p,i,j,k,mx,x,y,t,n;

cin>>t;
while(t--){
cin>>n;
p=new long int[n];
a=new long int[n];
for(i=0;i<n;i++)
cin>>p[i];

for(i=0;i<n-1;i++)
{cin>>x>>y;
v.push_back(make_pair(x,y));
}

for(i=0;i<n;i++){

for(k=0;k<n;k++) a[k]=1;


a[i]=0;
for(j=0;j<n-1;j++){
if(v[j].first==(i+1))
a[v[j].second-1]=0;
else if(v[j].second==(i+1))
a[v[j].first-1]=0;
}

//for(k=0;k<n;k++)
//cout<<a[k];

mx=-999;
k=0;
for(x=0;x<n;x++)
{
if(a[x]==1)
{
if(p[x]>mx)
{mx=p[x];
k=x+1;
}
}

}
cout<<k<<" ";

}
cout<<"\n";
v.clear();
}
return 0;
}












