#include<iostream>
#include<string.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n1,n3,n2,n,x,i,cnt;
 long int max;

    cin>>n1>>n2>>n3;
 n=n1+n2+n3;

    int a[1000001];
    memset(a,0,sizeof(a));

    for(i=cnt=0;i<n;i++) {
        cin>>x;a[x]++;
        if(a[x]==2) 
            cnt++;
    if(x>max) max=x;
    }

    cout<<cnt<<endl;

    for(i=0;i<=max;i++) if(a[i]>1) cout<<i<<endl;
    return 0;
}



