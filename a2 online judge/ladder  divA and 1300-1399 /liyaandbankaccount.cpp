
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

li converttonum(string s){
    stringstream ss(s);
    li x;
    ss>>x;
    return x;}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
string s;
lli mn=-99999999999;
lli i,x;

    cin>>s;
li n=converttonum(s);
if(n>0) cout<<s;
else{
    string orgstr=s;
s.erase(s.size()-1,1);
x=converttonum(s);

orgstr.erase(orgstr.size()-2,1);

li x1=converttonum(orgstr);

if(x1>x) cout<<x1;
else cout<<x;
}




 return 0;
}
