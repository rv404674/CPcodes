
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
int i,j,cnt;
string s;

cin>>s;
cnt=0;
while(1){
    if(s.size()==1)
    {cout<<cnt;break;}

    if(s[s.size()-1]=='0'){
        s.erase(s.size()-1,1);
    }
    else{
        int carry=1;
        for(i=s.size()-1;i>=0;i--){

            if(carry==0) break;
            if(s[i]=='1' && carry==1)
            {s[i]='0';carry=1;}
            else if(s[i]=='1' && carry==0){
                s[i]='1';carry=0;}
            else if(s[i]=='0' && carry==1){
                s[i]='1';carry=0;}
            else{
                s[i]=0;carry=0;}
        }
        if(carry==1)
            s="1"+s;
            }
    cnt++;
   // cout<<s<<endl;
}

return 0;
}
