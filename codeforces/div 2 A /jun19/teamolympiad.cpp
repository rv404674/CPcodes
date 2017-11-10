#include<iostream>
#include<string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,l,m,n,x,k;

    cin>>k;
    int cnt[4];
    int a[5100],b[5100],c[5100];

memset(cnt,0,sizeof(cnt));
    for(i=l=m=n=0;i<k;i++){
        cin>>x;
        if(x==1) a[l++]=i;
        else if(x==2) b[m++]=i;
        else c[n++]=i;

        cnt[x]++;
    }
     x=min(cnt[1],min(cnt[2],cnt[3]));
     cout<<x<<endl;

    for(i=0;i<x;i++)
        cout<<a[i]+1<<" "<<b[i]+1<<" "<<c[i]+1<<endl;
    return 0;
}
