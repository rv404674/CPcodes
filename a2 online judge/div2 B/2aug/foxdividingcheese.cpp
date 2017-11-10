
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
li a,b,c[6];
cin>>a>>b;

memset(c,0,sizeof(c));

while(a%2==0){
    c[0]++;
    a/=2;
}

while(a%3==0){
    c[1]++;
    a/=3;
}

while(a%5==0){
    c[2]++;
    a/=5;
}

while(b%2==0){
    c[3]++;
    b/=2;
}

while(b%3==0){
    c[4]++;
    b/=3;
}

while(b%5==0){
    c[5]++;
    b/=5;
}

if(a!=b) {cout<<-1;return 0;
}

cout<<abs(c[0]-c[3])+abs(c[1]-c[4])+abs(c[2]-c[5]);
return 0;
}
