
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

set <lli> s;
lli x,y,n;

void dfs(lli num,lli t){
    if(num>n || t>10) return ;
    s.insert(num);

    dfs(num*10+x,t+1);
    dfs(num*10+y,t+1);
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

cin>>n;
for( x=0;x<10;x++)
    for( y=x+1;y<10;y++)
        dfs(0,0);
cout<<s.size()-1;
return 0;
}




























