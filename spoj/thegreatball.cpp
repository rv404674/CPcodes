#include<iostream>
#include<algorithm>

using namespace std;

typedef long long lli;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli t,n,i,cnt,j,mx;

    cin>>t;
    while(t--){
        cnt=0;
        cin>>n;
        lli a[n],b[n];
        for(i=0;i<n;i++) cin>>a[i]>>b[i];
        sort(a,a+n);sort(b,b+n);

        cnt=0;
        mx=-99;
        for(i=j=0;i<n && j<n;){
            if(a[i]<=b[j]) {cnt++;i++;}
            else {cnt--;j++;}

            mx=max(mx,cnt);
        }
        cout<<mx<<endl;
    }
    return 0;
}
