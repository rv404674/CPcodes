
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
li i,j,x,y,len,orgham,newham,mn;
mn=1e7;

string ms,qs;
cin>>len;
cin>>ms>>qs;

int a[300][300]={0};

for(i=orgham=0;ms[i];i++) 
if(ms[i]!=qs[i]) {orgham++;a[ms[i]][qs[i]]=i+1;}

for(i='a';i<='z';i++)
{
    for(j=i+1;j<='z';j++){
        if(a[i][j] && a[j][i]){
            cout<<orgham-2<<endl;
            cout<<a[i][j]<<" "<<a[j][i]<<endl;
        return 0;
        }
    }
}


for(i=0;ms[i];i++){
    if(ms[i]!=qs[i])
    {for(j='a';j<='z';j++)
        if(j!=ms[i] && a[j][ms[i]] ){
            cout<<orgham-1<<endl;
            cout<<i+1<<" "<<a[j][ms[i]]<<endl;
            return 0;
        }
    }
}

cout<<orgham<<endl;
cout<<"-1 "<<"-1"<<endl;



return 0;
}
