
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
int i,n,m,x;
queue < pair<int,int> >q;

cin>>n>>x;
int visit[20000];
memset(visit,0,sizeof(visit));

q.push(make_pair(n,0));
while(1){
    pair <int,int> p=q.front();
    q.pop();
    int x1=p.first;
    int x2=p.second;
    if(visit[x1]) continue;
    if(x1==x) {cout<<x2;return 0;}
    visit[x1]=1;

    if(x1*2<=10000) q.push(make_pair(x1*2,x2+1));
    if(x1-1>=1) q.push(make_pair(x1-1,x2+1));
}

return 0;
}
