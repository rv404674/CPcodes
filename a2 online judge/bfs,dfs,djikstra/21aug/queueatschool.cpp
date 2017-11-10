
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
int t,used[55],n,i;
cin>>n>>t;
string s;
cin>>s;

while(t--){
    memset(used,0,sizeof(used));
    for(i=0;i<n-1;i++){
        if(s[i]=='B' && !used[i] && !used[i+1] && s[i+1]=='G')
        {swap(s[i],s[i+1]);
                used[i]=used[i+1]=1;
                }
                }
                    }

cout<<s<<endl;
return 0;
}
