
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

#define NN 100010
char str[NN];
int dp[NN], vst[NN];

int main (){
	
	int N, i;
	
	scanf("%d %s", &N, str);
	for(i=0; i<N; i++) scanf("%d", dp+i);
	
	int p=0;
	while(1){
		if(vst[p]){
			puts("INFINITE");
			return 0;
		}
		vst[p]=1;
		if(str[p]=='<') p-=dp[p];
		else p+=dp[p];
		
		if(p<0 || p>=N) break;
	}
	
	puts("FINITE");
	
	return 0;
}
