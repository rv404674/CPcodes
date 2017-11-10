#include<iostream>
#include<stdio.h>
#include<set>
//#include<testlib>
using namespace std;
//#define small

 int main(){
#ifdef small
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

long int t,x,y,i,n;
ios_base::sync_with_stdio(false);
cin>>n;
long int a[n];
for(i=0;i<n;i++) cin>>a[i];

set <long int> s;
cin>>t;
while(t--){

cin>>x>>y;
for(i=x-1;i<y;i++) s.insert(a[i]);
cout<<s.size()<<endl;
s.clear();
}
return 0;
}

