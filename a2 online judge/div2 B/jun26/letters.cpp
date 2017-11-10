
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
string ms,qs;
int i;
getline(cin,ms);
getline(cin,qs);

bool present[200]={false};
int cnt[200]={0};

for(i=0;ms[i];i++)
{ if(ms[i]!=' ')
    present[ms[i]]=true;cnt[ms[i]]++;
}

for(i=0;qs[i];i++)
  if(qs[i]!=' '){   
if( present[qs[i]] && cnt[qs[i]]){
        cnt[qs[i]]--;
    }
else {cout<<"NO";return 0;
}
}

cout<<"YES";
return 0;
}
