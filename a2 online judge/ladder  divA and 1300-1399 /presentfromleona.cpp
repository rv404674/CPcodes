
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

int k,k2,i,j,l,m,x,y;
cin>>x;

y=2*x;
for(i=0;i<=x;i++){
    for(k=1;k<=y;k++) cout<<" ";
    y-=2;

    for(l=0;l<=i;l++)  
        if(i==0) cout<<l;
    else 
        cout<<l<<" ";

    for(m=i-1;m>=0;m--) 
        if(m==0) cout<<m;
         else cout<<m<<" ";
    cout<<endl;
}

y=2;
for(i=x-1;i>=0;i--){
    for(j=1;j<=y;j++) cout<<" ";
    y+=2;

    for(m=0;m<=i;m++) 
        if(m!=i) cout<<m<<" ";
        else cout<<m;

    for(j=i-1;j>=0;j--) cout<<" "<<j;
    cout<<endl;
}



 return 0;
}
