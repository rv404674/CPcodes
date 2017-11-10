
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
lli modularexponen(lli a,lli b,lli c){
   lli res=1;
  while(b>0){
     if(b&1) res=(res*a)%c;
    b=b/2;
   a=(a*a)%c;
  }
 return res%c;
}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
lli p,i,j,cnt,x,y;

cnt=0;cin>>p;
for(x=1;x<p;x++)
{
    for(j=1;j<=(p-2);){
        
     //   DEBUG(x)
       //     DEBUG(j)
        y=modularexponen(x,j,p);
        //cout<<y<<endl;


        if( (y-1)!=0) j++;
        else break;
    }
if(j==(p-1)) cnt++;
}

cout<<cnt<<endl;














return 0;
}
