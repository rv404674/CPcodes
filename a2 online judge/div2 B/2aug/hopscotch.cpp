
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


int main(){
	int a,x,y;
	cin>>a>>x>>y;
	if(y%a==0)cout<<-1;
	else{
		y/=a;
		if(y==0&&(x>=0&&x*2<a||x<=0&&x*2>-a))cout<<1;
		else if(y%2==1&&(x>=0&&x*2<a||x<=0&&x*2>-a))cout<<y/2*3+2;
			 else if((y!=0&&y%2==0)&&x<0&&x>-a)cout<<y/2*3;
			 	  else if((y!=0&&y%2==0)&&x>0&&x<a)cout<<y/2*3+1;
					   else cout<<-1;
		}
return 0;
}
