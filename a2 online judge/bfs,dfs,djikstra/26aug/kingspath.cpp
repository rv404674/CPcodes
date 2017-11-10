
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
map < pair<li,li>,li > m;
queue < pair<li,li> > q;
li n,srcx,a,srcy,destx,desty,i,j,x,y;

cin>>srcx>>srcy>>destx>>desty;
cin>>n;
while(n--){
    cin>>a>>x>>y;
    for(i=x;i<=y;i++)
        m[make_pair(a,i)]=-1;
}
m[make_pair(srcx,srcy)]=0;
q.push(make_pair(srcx,srcy));

while(!q.empty()){
    x=q.front().first;
    y=q.front().second;

    q.pop();
    for(int k=0;k<8;k++){
        if(m[make_pair(x+xx[k],y+yy[k])]<0){
            m[make_pair(x+xx[k],y+yy[k])]=m[make_pair(x,y)]+1;
            q.push(make_pair(x+xx[k],y+yy[k]));
        }
    }
    if(m[make_pair(destx,desty)]>0) break;
}

cout<<m[make_pair(destx,desty)];
return 0;
}
