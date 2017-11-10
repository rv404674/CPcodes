
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

char d1[21][21],d2[21][21];
int m,n;
int visited[21][21];

int isvalid(int i,int j){
if(i>=0 && i<m && j>=0 && j<n) return 1;
else return 0;
}


void dfs(int i,int j){
    if(!isvalid(i,j)) return ;
    visited[i][j]=1;

    if(d1[i][j]=='>') dfs(i,j+1);
else  dfs(i,j-1);

if(d2[i][j]=='v') dfs(i-1,j);
else dfs(i+1,j);
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,j;
cin>>m>>n;
string s1,s2;
cin>>s1>>s2;

if(s1[0]==s1[m-1] || s2[0]==s2[n-1] || (s1[0]=='<' && s2[0]=='^') || (s1[0]=='>' && s2[0]=='v') )
   cout<<"NO";
else cout<<"YES";
return 0;
}

