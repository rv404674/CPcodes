
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

int n;
int isvalid(int i,int j){
    if(i>=0 && i<n && j>=0 && j<n) return 1;
    else return 0;
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,j,l,m;

cin>>n;
char a[n][n];
bool visited[n][n];
memset(visited,false,sizeof(visited));

for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        cin>>a[i][j];


for(i=0;i<n;i++)
{
    for(j=0;j<n;)
    {
        if(a[i][j]=='#' && !visited[i][j])
        {
            if(isvalid(i+1,j) && isvalid(i+2,j) && isvalid(i+1,j-1) && isvalid(i+1,j+1))
            {
                    for(m=-1;m<=1;)
                    if(a[i+1][j+m]=='#' && !visited[i+1][j+m]) m++;
                        else {cout<<"NO";return 0;}

                    if(a[i+2][j]!='#') {cout<<"NO";return 0;}

              
                    for(m=-1;m<=1;m++)
                        visited[i+1][j+m]=true;
                    visited[i][j]=visited[i+2][j]=true;
                }
            else {cout<<"NO";return 0;}


            }
    j++;
}
        }

cout<<"YES\n";
return 0;
}
