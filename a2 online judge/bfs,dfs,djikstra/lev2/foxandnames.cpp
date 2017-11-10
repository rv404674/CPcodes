
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
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;

string a[110];
vector< int> adj[1000];
int visit[100]={0},use[100]={0};
vector<int> top;

void dfs(int i){
    visit[i]=use[i]=1;
    for(auto itr:adj[i])
        if(use[itr])
        {cout<<"Impossible\n";
            exit(0);
        }
        else if(!visit[itr]) 
            dfs(itr);
    use[i]=0;
top.push_back(i);
}


void makeg(int x){
for(int i=0;i<a[x].size() && i<a[x+1].size();i++)
    if(a[x][i]!=a[x+1][i])
    {
        adj[a[x+1][i]-'a'].push_back(a[x][i]-'a');
        return ;
    }
if(a[x].size()>a[x+1].size())
{cout<<"Impossible\n";
    exit(0);
}
}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int n,i;
cin>>n;
for(i=1;i<=n;i++) cin>>a[i];
for(i=1;i<n;i++) makeg(i);
for(i=0;i<26;i++) if(!visit[i]) dfs(i);
for(i=0;i<26;i++) cout<<top[i]+'a';
return 0;
}




























