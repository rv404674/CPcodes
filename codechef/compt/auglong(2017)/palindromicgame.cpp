
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,t1;
string s,t;

cin>>t1;
while(t1--){
    cin>>s>>t;
    bool flag;
    flag=true;
    int cnt[30];
    memset(cnt,0,sizeof(cnt));

    for(i=0;s[i];i++) cnt[s[i]-'a']++;
    for(i=0;s[i];i++)
        if(t.find(s[i])==-1 && cnt[s[i]-'a']>=2)
        {cout<<"A\n";flag=false;break;}

   if(flag)
   {
       for(i=0;t[i];)
           if(s.find(t[i])!=-1) i++;
           else break;
       int x=0;
       for(int j=0;s[j];j++)
           if(t.find(s[j])!=-1) x++;

       if(i==t.size() && x!=s.size()) {cout<<"A\n";flag=false;}
   }


    if(flag) cout<<"B\n";
}
return 0;
}
