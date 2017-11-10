
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
li n,l,cnt,v1,a,vo,c,x,day;
cin>>c>>vo>>v1>>a>>l;

if(vo>=c)
    cout<<1;
else{
    day=1;
    cnt=vo;
    x=vo;
    int flag=1;

    while(1){
        day++;
        if(flag) cnt+=a;
        if(cnt>=v1) {flag=0; cnt=v1;}

        x+=cnt-l;
    if(x>=c)     
        {cout<<day;break;}
    }
}

 return 0;
}
