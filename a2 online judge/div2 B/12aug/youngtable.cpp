
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
int n,i,j,k,l,m;
int c[55],a[55][55],glob[55][55];

cin>>n;
for(i=0;i<n;i++) cin>>c[i];

int s=0;
for(i=0;i<n;i++)
    for(j=0;j<c[i];j++)
    {cin>>a[i][j];s++;glob[i][j]=s;}


vector< pair< pair<int,int>,pair<int,int> > > v;

int res=0;
for(i=0;i<n;i++){
    for(j=0;j<c[i];j++)
        if(a[i][j]!=glob[i][j])
        { res++;
            int x,y;
            for(k=0;k<n;k++)
                for(l=0;l<c[k];l++)
                    if(a[k][l]==glob[i][j]){
      x=k;y=l;
            v.push_back( make_pair( make_pair(i+1,j+1),make_pair(x+1,y+1) ) );
        }

        swap(a[i][j],a[x][y]);

    }
}

cout<<v.size()<<endl;
for(i=0;i<v.size();i++)
cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;

return 0;
}
