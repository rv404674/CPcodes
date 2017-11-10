#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i,cnt,j;

    cnt=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++) cin>>a[i]>>b[i];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++) 
            if(a[i]==b[j]) cnt++;
    cout<<cnt<<endl;

    return 0;
}
