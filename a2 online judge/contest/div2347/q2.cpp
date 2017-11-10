
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
string s;
char a[200],c;
li n,i,x,sign,k,pos,neg;
pos=1;neg=k=0;

while(true){
    cin>>c;
    if(c=='=') break;
    if(c!=' ' && c!='?'){
        if(c=='+') pos++;
        if(c=='-') neg++;
        a[k++]=c;
    }
}


cin>>n;
if(pos-n*neg>n || n*pos-neg<n)
{
    cout<<"Impossible";return 0;
}

cout<<"Possible\n";
li sum=0;
for(i=0;i<k;i++){
sign=1;

if(i>0 && a[i-1]=='-') sign=-1;
if(sign==1) pos--;
else neg--;

for(x=1;x<=n;x++){
    if( sum+x*sign+pos-n*neg<=n && sum+x*sign+n*pos-neg>=n){
        cout<<x<<" "<<a[i]<<" ";
        sum+=x*sign;
        break;
    }
}
}

cout<<abs(n-sum)<<" = "<<n;
return 0;
}




























