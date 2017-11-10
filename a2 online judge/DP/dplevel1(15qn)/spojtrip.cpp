
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


string s1,s2;
int dp[100][100];
int n,m;
set <string> seq;
map<string,bool> p[100][100];

void findseq(int n,int m,string wrd){
  if(p[n][m].find(wrd)!=p[n][m].end())
      return ;
  if(n==0 || m==0)
      seq.insert(wrd);

  else  if(s1[n-1]==s2[m-1]){
      wrd=s1[n-1]+wrd;
      findseq(n-1,m-1,wrd);
  }
  else if(dp[n-1][m]>dp[n][m-1]){
      findseq(n-1,m,wrd);
  }
  else if(dp[n-1][m]<dp[n][m-1]){
      findseq(n,m-1,wrd);
  }
  else {
      findseq(n,m-1,wrd);
      findseq(n-1,m,wrd);
  }

  p[n][m][wrd]=true;
}




int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int t,i,j;
cin>>t;
while(t--){
    cin>>s1>>s2;
n=s1.size();m=s2.size();

    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 || j==0) 
                dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

   findseq(n,m,"");
for(auto i:seq)
    cout<<i<<endl;
seq.clear();
}

return 0;
}































