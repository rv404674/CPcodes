#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//#define small

int main(){
ios_base::sync_with_stdio(false);
vector <long int> a;
long int x;
int i,j,k,t,n;

cin>>t;
while(t--){
cin>>n;
for(i=0;i<n;i++)
{cin>>x;
a.push_back(x);}

while(1){
x=a[0];
k=0;
for(i=1;i<n;i++)
if(a[i]<x)
{x=a[i];
k=i;
}

for(i=0;i<n;i++) a[i]=a[i]-(k+1);
for(i=k=0;i<n;i++)
if(a[i]<0)
k++;

if((n-k)==1)
{cout<<"Ladia\n";break;}
else if((n-k)==0)
{cout<<"Kushagra\n";break;}

}
a.clear();
}i
return 0;}
