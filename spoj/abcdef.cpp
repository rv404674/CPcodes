#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

int n,i,l,j,k,x,m,total,y;
cin>>n;
int a[n];

for(i=0;i<n;i++) cin>>a[i];

//a*b+c=d(f+e)
l=0;
vector <int> b,c;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
for(k=0;k<n;k++)
{x=a[i]*a[j]+a[k];
   b.push_back(x);}
}

m=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
        for(k=0;k<n;k++)
        {if(a[i]!=0)
            {x=a[i]*(a[j]+a[k]);
                c.push_back(x);
        }
            }

}

sort(b.begin(),b.end());
sort(c.begin(),c.end());

/*for(i=0;i<l;i++) cout<<b[i]<<" ";
cout<<endl;
for(i=0;i<m;i++) cout<<c[i]<<" ";
*/
total=0;
for(i=0;i<b.size();i++)
{
x=lower_bound(c.begin(),c.end(),b[i])-c.begin();
y=upper_bound(c.begin(),c.end(),b[i])-c.begin();
//cout<<x<<" "<<y;
total+=(y-x);
}

cout<<total;
   return 0;
   }
