#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t,n,i,k,sum,x;
    cin>>x;
    sum=0;
    int a[12];
    for(i=0;i<12;i++) cin>>a[i];
    sort(a,a+12,greater <int> ());

    if(x==0) cout<<0<<endl;
    else
    for(i=0;i<12;i++)
    {sum+=a[i];
        if(sum>=x) {cout<<i+1<<endl;break;}
    }
    if(i==12 && x!=0) cout<<-1<<endl;
    return 0;
}
