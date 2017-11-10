#include<iostream>
#include<string>
using namespace std;

//#define small
int main(){
ios_base::sync_with_stdio(false);
#ifdef small
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif // small

string s;char c;int i,l,j,p,z,k,mx,x;
z=mx=-999;
cin>>s>>c>>p;
for(i=0;i<s.size();i++)
     { for(j=i,k=0;j<i+p;j++)
          if(s[i]==c)
              k++;
     if(k>z)
        z=k;
            }

for(i=1;i<s.size();i++){
for(j=i,k=0;j<i+p;j++)
          if(s[i]==c)
              k++;
              k++;

     if(k==(z+1))
         {x=i;if(x>mx) mx=x;}
       }

cout<<mx+1;

return 0;
}




