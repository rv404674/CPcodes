
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
li n,k,l,hi,lo,d,i,diff;

cin>>n>>d>>l;
for(i=lo=hi=0;i<n;i++)
    if(i%2){hi-=1;lo-=l;}
    else { hi+=l;lo+=1;}

if(d>=lo && d<=hi){
    int a[110];
    for(i=0;i<n;i++)
     if(i%2) a[i]=l;
     else a[i]=1;

    diff=d-lo;
    for(i=0;i<n;i++){
        if(i%2){
            while(a[i]>1 && diff){
                a[i]--;
                diff--;}
        }
        else{
            while(a[i]<l && diff){
                a[i]++;
                diff--;}
        }
    }
    for(i=0;i<n;i++) cout<<a[i]<<" ";
return 0;
}
cout<<-1;
return 0;
}
