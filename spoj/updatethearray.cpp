#include<iostream>
#include<string.h>
using namespace std;

typedef long long lli;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli l,r,n,t,cnt,val,m,i,u;

    cin>>t;
    while(t--){
        cin>>n>>u;
        lli a[n],p[n+1];

        memset(p,0,sizeof(p));
        while(u--){
            cin>>l>>r>>val;
            p[l]+=val;p[r+1]-=val;}

    for(i=cnt=0;i<n;i++)
    {cnt+=p[i];a[i]=cnt;}

    cin>>m;
    while(m--){
        cin>>n;
        cout<<a[n]<<endl;
    }

    }
    return 0;
}


