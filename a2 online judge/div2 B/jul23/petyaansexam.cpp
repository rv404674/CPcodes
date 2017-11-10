
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
string ms,qs,s;
int i,j,q;
bool  check[27];

memset(check,false,sizeof(check));
cin>>s;
for(i=0;s[i];i++)
    check[s[i]-'a']=true;


cin>>ms;
cin>>q;

while(q--)
{
    cin>>qs;

bool flag=true;
    for(i=ms.size()-1,j=qs.size()-1;i>0 && q>0;)
    {
        if(ms[i]=='*')
        {
            if (check[qs[j]-'a'] ) {cout<<"NO\n";flag=false;break;}
            while( j>0 && !check[qs[j]-'a']) j--;
            i--;

        }

        if(ms[i]=='?') {
           if(!check[qs[j]-'a']) {cout<<"NO\n";flag=false;break;}
            else {i--;j--;}
        }
    else if(ms[i]!=qs[j])
    {cout<<"NO\n";flag=false;break;}
        else {i--;j--;}
    
    }

if(flag) cout<<"YES\n";
}
return 0;
}
