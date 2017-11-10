
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
li t,n,i,year,tenpow;
string s;

cin>>t;
while(t--){
cin>>s;

    li k=s.size();
s=s.substr(4,k-4);
 k=s.size();

stringstream ss(s);
ss>>year;

li sum=0;
tenpow=10;

for(i=1;i<k;i++){
sum+=tenpow;
tenpow*=10;
}

while(sum+1989>year)
    year+=tenpow;

    cout<<year<<endl;
    }
return 0;
}



























