
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
string s1,s2,prev;
int x,t,y;

cin>>t;

    cin.ignore();
while(t--){

    x=y=0;
  getline(cin,s1);
if(s1.size()<5) cout<<"OMG>.< I don't know!\n";
else
{  
s2=s1.substr(s1.size()-5,5);

if(s2=="lala.") y++;


s2=s1.substr(0,5);

if(s2=="miao.") x++;

   if(x==1 && y==1 || (x==0 && y==0) ) cout<<"OMG>.< I don't know!\n";
   else if(y==1) cout<<"Freda's\n";
   else if(x==1) cout<<"Rainbow's\n";
} 


}













return 0;
}
