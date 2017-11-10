
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
int t,i;
string s1,s2;
s2="AEIOUYaeiouy";
    cin>>s1;
    for(i=0;s1[i];i++)
        if(s2.find(s1[i])==-1)
        {
            if(s1[i]>='A' && s1[i]<='Z') cout<<"."<<(char)(s1[i]+32);
            else cout<<"."<<s1[i];
        }


 return 0;
}
