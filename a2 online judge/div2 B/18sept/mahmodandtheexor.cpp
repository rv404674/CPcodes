
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


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
lli x,y,ans,pow1,pow2,i,n;
cin>>n>>x;

pow1=(1<<17);
pow2=(1<<18);

if(n==1){
    cout<<"YES\n"<<x;
}
else if(n==2 && x==0){
    cout<<"NO\n";
}
else if(n==2){
    cout<<"YES\n";
    cout<<"0 "<<x;
}
else{

    ans=0;
    cout<<"YES\n";
    for(i=1;i<=n-3;i++) 
    {cout<<i<<" ";ans^=i;}

    if(ans==x){
        cout<<pow1<<" "<<pow2<<" "<<pow1+pow2<<endl;}
    else {
        cout<<0<<" "<<pow1<<" "<<(pow1^(ans^x));
    }
}
return 0;
}




























