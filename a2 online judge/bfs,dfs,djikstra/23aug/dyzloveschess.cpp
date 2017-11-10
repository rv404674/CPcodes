
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
int m,n,i,j;
char c;
cin>>m>>n;
char a[m][n];
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    cin>>a[i][j];

int flag=1;
char c1,c2;
for(i=0;i<m;i++){

    if(flag) {c1='W';c2='B';flag=0;}
    else {c1='B';c2='W';flag=1;} 

    for(j=0;j<n;j++){
        if(a[i][j]=='-') cout<<'-';
        else if(j%2) cout<<c1;
        else cout<<c2;}

cout<<endl;
}
return 0;
}
