
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
int dx[4]={-1,0,0,1Darkshadows};
int dy[4]={0,1,-1,0};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;

int mx,p[2001],n;
int dfs(int i,int ans){
    if(ans>mx) mx=ans;
    for(int j=1;j<=n;j++)
        if(i==p[j])
            dfs(j,ans+1);
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,j;
    cin>>n;
mx=0;

    for(i=1;i<=n;i++) cin>>p[i];
    for(i=1;i<=n;i++)
         if(p[i]==-1) 
             dfs(i,1);

    cout<<mx;
    return 0;
}
