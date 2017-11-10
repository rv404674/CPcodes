#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<set>
#include<map>

#define L(x) (x<<1)
#define R(x) (x<<1|1)
#define MID(x,y) ((x+y)>>1)

#define bug printf("hihi\n")

#define eps 1e-8

using namespace std;


#define INF 0x3f3f3f3f
#define N  100

int dp[10][100][100];
int bit[20];

int dfs(int pos,int le,int ri,bool bound)
{
    if(pos==0) return ri-le==1 ? 1:0;
    if(!bound&&dp[pos][le][ri]>=0) return dp[pos][le][ri];
    int up=bound ? bit[pos]:9;
    int ans=0;
    for(int i=0;i<=up;i++)
    {
        if(pos%2==0)
            ans+=dfs(pos-1,le,ri+i,bound&&i==up);
        else
            ans+=dfs(pos-1,le+i,ri,bound&&i==up);
    }
    if(!bound) dp[pos][le][ri]=ans;
    return ans;
}

int solve(int x)
{
    int i,j;
    int len=0;
    while(x)
    {
        bit[++len]=x%10;
        x/=10;
    }
    return dfs(len,0,0,true);
}

int main()
{
   int i,j;
   memset(dp,-1,sizeof(dp));
   int t;
   scanf("%d",&t);
   int le,ri;
   while(t--)
   {
       scanf("%d%d",&le,&ri);
       printf("%d\n",solve(ri)-solve(le-1));
   }
   return 0;
}
