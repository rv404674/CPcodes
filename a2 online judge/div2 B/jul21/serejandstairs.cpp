
#include<iostream>
#include<iomanip>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<utility>
#include<limits.h>
#include<functional>
#include<algorithm>


using namespace std;

int xx[8]={-1,-1,-1,0,0,1,1,1};
int yy[8]={-1,0,1,-1,1,-1,0,1};
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;

string tostring(int a){
    stringstream ss;
    ss<<a;
    return ss.str();
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
string s1,s2,s3;
int i,j,n,x;
cin>>n;

s1="";
s2="";
int a[5001];
memset(a,0,sizeof(a));

for(i=0;i<n;i++){
    cin>>x;a[x]++;}


bool flag=true;
for(i=5000;i>=0;i--)
{
    if(a[i]){
        if(flag){
            s3=tostring(i);
            s1+=s3;
            s1+=" ";
            flag=false;
        }
        else{
            s3=tostring(i);
            if( (a[i]%2)!=0)
            {
                if(a[i]>1)
                {
                    s1+=s3;s2+=s3;
                s1+=" ";s2+=" ";
                }
                else {s1+=s3;s1+=" ";}
            }
      else{
          s1+=s3;s2+=s3;s1+=" ";s2+=" ";
      }
        }

    }
}

stringstream ss1(s2);
vector <int> v2;
while(ss1>>x){
    v2.push_back(x);}

reverse(v2.begin(),v2.end());    

vector <int> v;
stringstream ss(s1);
while(ss>>x){
    v.push_back(x);
}
cout<<v2.size()+v.size()<<endl;

for(i=0;i<v2.size();i++)
cout<<v2[i]<<" ";

for(i=0;i<v.size();i++)
i==(v.size()-1)?cout<<v[i]:cout<<v[i]<<" ";



/*
cout<<s2.size()+s1.size()<<endl;

for(i=0;s2[i];i++)
cout<<s2[i]<<" ";
for(i=0;s1[i];i++)
if(i == (s1.size()-1)) cout<<s1[i];
else cout<<s1[i]<<" ";*/

return 0;
}
