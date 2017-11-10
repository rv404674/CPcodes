
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
int t,i,a;
string s;
map<string,bool> m;

m["ABSINTH"]=true;
m["BEER"]=true;
m["BRANDY"]=true;
m["VODKA"]=true;
m["SAKE"]=true;
m["CHAMPAGNE"]=true;
m["GIN"]=true;
m["RUM"]=true;
m["WINE"]=true;
m["TEQUILA"]=true;
m["WHISKEY"]=true;

cin>>t;
int cnt=0;
while(t--){
cin>>s;
if( s[0]>='0' && s[0]<='9') 
{stringstream ss(s);
    ss>>a;
    if(a<18) cnt++;
}
else if(m[s]) {cnt++;}
}

cout<<cnt;













return 0;
}
