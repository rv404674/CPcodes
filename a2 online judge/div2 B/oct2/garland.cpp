
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
string s1,s2;
li i,cnt,cnt2;
li a[100],b[100];
cin>>s1>>s2;

memset(a,0,sizeof(a));
memset(b,0,sizeof(a));

for(i=0;s1[i];i++) a[s1[i]-'a']++;
for(i=0;s2[i];i++) b[s2[i]-'a']++;
cnt=cnt2=0;
for(char c='a';c<='z';c++){
    if(b[c-'a'] && !a[c-'a']){cout<<"-1";return 0;}
    cnt+=min(b[c-'a'],a[c-'a']);
}

cout<<cnt<<endl;
return 0;
}
