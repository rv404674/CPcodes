#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,k,cnt,i,x;

    cnt=0;
    int a[110];
    cin>>n>>k;
    for(i=0;i<n;i++) cin>>a[i];
    x=a[k-1];

    for(i=0;i<n;i++)
        if(a[i]!=0 && a[i]>=x) cnt++;
        else break;
        
    cout<<cnt<<endl;
    return 0;
}

