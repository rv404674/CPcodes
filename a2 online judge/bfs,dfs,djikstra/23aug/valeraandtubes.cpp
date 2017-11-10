
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
int x,y,n,m;

void make(){
if(x&1){
    y++; if(y==m+1) {y=m;x++;}
}
else {
   y--; if(y==0){y=1;x++;}
}
}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,j,k,t;
cin>>n>>m>>k;
x=1;y=0;
for(i=1;i<k;i++){
    cout<<"2";
    make();
    cout<<" "<<x<<" "<<y;
    make();
    cout<<" "<<x<<" "<<y<<endl;
}

t=n*m-2*(k-1);
cout<<t;
while(t--)
{make();
    cout<<" "<<x<<" "<<y;
    }
return 0;
}
