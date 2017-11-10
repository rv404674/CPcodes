
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
li n,x,cnt,k,d,i,sum,j,t;

cin>>t;
while(t--){
    cin>>n>>d;
    cnt=sum=0;

    li a[n];
    for(i=0;i<n;i++) { cin>>a[i];sum+=a[i];}

    k=sum/n;
    if(sum%n!=0) cout<<"-1\n";
    else{

    for(i=0;i<n-d;i++){
        if(a[i]!=k){

a[i]>k?cnt+=(a[i]-k):cnt+=(k-a[i]);

            if(a[i]<k){ a[i+d]-=(k-a[i]);a[i]=k;}
            else {a[i+d]+=(a[i]-k);a[i]=k;}

        }
    }

   // for(i=0;i<n;i++) cout<<a[i]<<" ";

    for(i=0;i<n;i++) if(a[i]!=k) break;
    if(i==n) cout<<cnt<<endl;
    else cout<<-1<<endl;
    }
}
return 0;
}
