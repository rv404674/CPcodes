
#include<iostream>
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


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
string s1,s2;
li i,j,p,q,k,x,y,n;

cin>>s1>>s2;
n=s1.size();
if(n!=s2.size()) cout<<"NO\n";
else
{

for(i=k=0;i<n-1;i++){
    x=(s1[i]-'0');y=(s1[i+1]-'0');
   p=x^y;q=x | y;

   if(p== (s2[k]-'0') ){
       s1[i]=(char)p;s1[i+1]=(char)q;
       k++;}
   else if(q== (s2[k]-'0') ){
       s1[i]=(char)q;s1[i+1]=(char)p;
       k++;}
   else break;
}
if(i==n-1) cout<<"YES\n";
else cout<<"NO\n";
}








































 return 0;
}
