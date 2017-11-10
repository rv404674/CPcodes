#include<iostream>
typedef long li;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    li total,n,i;

    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++) cin>>a[i]>>b[i];
    li mxpeople=-999;

    for(i=total=0;i<n;i++)
    {total+=(b[i]-a[i]);
       // cout<<total<<endl;
        if(total>mxpeople)
            mxpeople=total;
    }

    cout<<mxpeople<<endl;
return 0;
}
