#include <string.h>
#include<map>
#include <iostream>
using namespace std;

typedef long long lli;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    //lli a[500001],pre[10000000],n,i;

   lli a[500001],n,i;


    map<lli,lli> m;

    a[0]=0;

    for(lli i=1;i<500001;i++){
        lli x=a[i-1]-i;

          if(x>0 && m[x]!=1) {a[i]=x;m[x]=1;}
          else {a[i]=a[i-1]+i;m[a[i]]=1;}
         // cout<<i<<" "<<a[i]<<endl;
    }
    //cout<<i;

    while(1){
        cin>>n;
        if(n==-1) break;
        cout<<a[n]<<endl;
    }

    return 0;
}

