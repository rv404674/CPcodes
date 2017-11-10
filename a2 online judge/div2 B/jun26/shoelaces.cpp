
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

void deletevector(vector <int> &v,int x){
vector <int> :: iterator itr;
int i;
for(i=0;i<v.size();i++)
    if(v[i]==x) break;

if(i!=v.size())
v.erase(i+v.begin());

}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,n,m,x,y,cn,j,l,t,cnt;

cin>>n>>m;    
vector <int> v1[n+1];

for(i=1;i<=n;i++)
    v1[i].push_back(i);

for(i=0;i<m;i++){
    cin>>x>>y;
    v1[x].push_back(y);
    v1[y].push_back(x);
}

vector <int> :: iterator itr;
vector <int> v2;
cnt=0;


while(1){

    for(i=1;i<=n;)
        if(v1[i].size()==0 || v1[i].size()==1 || v1[i].size()>2)
            i++;
        else break;

    if(i== (n+1)) break;
    for(l=1;l<=n;l++)
    {    if(v1[l].size()==2)
        {x=*(v1[l].begin());    
        v2.push_back(x);}
}

    

    for(i=0;i<v2.size();i++)
    v1[v2[i]].clear();

    for(i=1;i<=n;i++)
    for(j=0;j<v2.size();j++)
        if(v1[i].size()>1)   
            deletevector(v1[i],v2[j]);

    v2.clear();
    cnt++;
}
cout<<cnt;

return 0;
}
