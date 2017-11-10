
#include<iostream>
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


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;

int editdist(string s1,string s2){
int m,n,i,j;
m=s1.size();n=s2.size();

int dp[m+1][n+1];

for(i=0;i<=m;i++) 
    for(j=0;j<=n;j++){
        if(i==0) dp[i][j]=j;
        else if(j==0) dp[i][j]=i;
        else if(s1[i-1]==s2[j-1])
            dp[i][j]=dp[i-1][j-1];
        else
            dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
    }
return dp[m][n];

}




int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int t;
string s1,s2;

cin>>t;
while(t--){
cin>>s1>>s2;
cout<<editdist(s1,s2)<<endl;
}




 return 0;
}
