
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
const int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};

vector <int> convert(string s){
   vector<int> v(3);
   char c[2];
   stringstream ss(s);
   ss>>v[0]>>c[0]>>v[1]>>c[1]>>v[2];
   if(c[0]!='-' || c[1]!='-'  || s.find("-")!=2 ||s.find_last_of("-")!=5) v[2]=-1;
  return v;
} 



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 string s,s2,ans;


 int i,mx;
 vector <int> v;
map<string,int> m;

mx=-10;
 cin>>s;
 for(i=0;i+9<s.size();i++){
s2=s.substr(i,10);

v=convert(s2);
if(v[2]>=2013 && v[2]<=2015 && v[1]>0 && v[1]<13 && v[0]>0 && v[0]<=day[v[1]-1] )
{
    m[s2]++;
    if(m[s2]>mx){mx=m[s2];ans=s2;}
i+=7;
}
}


cout<<ans<<endl;
return 0;
}











