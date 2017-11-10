
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
string s,s2,t,s1;
int i,j,k;

int x,y;
cin>>x>>y;

vector <string> v;
cin>>s>>t;
char c1,c2;

for(i=0;i<=t.size()-s.size();i++){

    s2=t.substr(i,s.size());

        v.push_back(s2);
    
}

li mn=1e9;
li cnt=0;

for(i=0;i<v.size();i++){
    s2=v[i];
cnt=0;
    for(j=0;s2[j];j++)
        if(s2[j]!=s[j])
            cnt++;
  
    if(cnt<mn){
      k=i;
      mn=cnt;
    }

}

cout<<mn<<endl;
s2=v[k];

if(mn)
for(i=0;s2[i];i++)
if(s[i]!=s2[i])
    cout<<i+1<<" ";
    return 0 ;
    }
