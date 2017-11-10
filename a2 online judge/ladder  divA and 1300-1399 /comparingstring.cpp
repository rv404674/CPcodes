
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
string s1,s2;
int i,j;
int a[30],b[30];
memset(a,0,sizeof(a));
memset(b,0,sizeof(b));

int notinpos;

cin>>s1>>s2;
int flag=1;
if(s1.size()!=s2.size()) {cout<<"NO";flag=0;}

if(flag){
for(i=0;s1[i];i++) a[s1[i]-'a']++;
for(i=0;s2[i];i++) b[s2[i]-'a']++;

for(i=0;i<30;i++) if(a[i]!=b[i]) {cout<<"NO";flag=0;break;}
}

 if(flag){
    for(i=notinpos=0;s2[i];i++) if(s1[i]!=s2[i]) notinpos++;
    if(notinpos>2) {cout<<"NO";flag=0;}
 }

if(flag) cout<<"YES";


 return 0;














}
