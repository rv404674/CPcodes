#include<iostream>
//#include<stdio.h>
using namespace std;

//#define small
int main(){

#ifdef small
freopen("input","r",stdin);
#endif // small

int t,i,j,m,n;
ios_base::sync_with_stdio(false);
cin>>t;
while(t--){
cin>>m>>n;
char a[m][n];

for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];

for(i=0;i<m;i++)
{
for(j=0;j<n;j++){

if(j+1<n)
{if(a[i][j]=='W')
if(a[i][j+1]!='B')
break;

if(a[i][j]=='A')
if( a[i][j+1]=='W')
break;

}

if(i+1 <m)
{
if(a[i][j]=='W')
if(a[i+1][j]=='A' || a[i+1][j]=='W')
break;

 if(a[i][j]=='B')
if( a[i+1][j]!='B' )
break;


}

}


if(j!=n)
break;


}
if(i==m)
cout<<"yes\n";
else cout<<"no\n";
}
return 0;


}


