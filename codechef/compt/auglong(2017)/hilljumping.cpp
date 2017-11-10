
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
li i,n,q,l,r,t,k,x,cnt,c,j;

    cin>>n>>q;
    li a[n];
    for(i=0;i<n;i++) cin>>a[i];

    int flag1,flag2;
    flag1=flag2=1;
    while(q--){
    cin>>c;

    if(c==1){
        cin>>i>>cnt;
        i-=1;
        k=i;
        for(j=i+1;j<n;j++)
            if(cnt>0)
            {   
       if(j-k>100) {flag1=0;break;}         
        if(a[j]>a[k]){
                    k=j;
                    cnt--;}
    }
            else break;
          
        if(flag1==0) cout<<k+1<<endl;
        else if(cnt!=0 && j==n) cout<<k+1<<endl;
        else if(cnt==0) cout<<j<<endl;

    }
    else{
        cin>>l>>r>>x;
        for(i=l-1;i<r;i++) a[i]+=x;
    }

}
return 0;
}
