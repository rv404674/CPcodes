
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
char a[3][3];
int i,j;
for(i=0;i<3;i++)
    for(j=0;j<3;j++)
        cin>>a[i][j];

if(a[0][0]!=a[2][2]) cout<<"NO";
else if(a[0][1]!=a[2][1]) cout<<"NO";
else if(a[0][2]!=a[2][0]) cout<<"NO";
else if(a[1][0]!=a[1][2]) cout<<"NO";
else cout<<"YES";















return 0;
}
