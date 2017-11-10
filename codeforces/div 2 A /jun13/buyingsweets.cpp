#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,n,k,x,i,sum;
    int a[110];

    cin>>t;
    while(t--){
        cin>>n>>x;
        sum=0;
        for(i=0;i<n;i++) {cin>>a[i];sum+=a[i];}
        sort(a,a+n);

        int ans=sum/x;
        for(i=0;i<n;i++)
            if( (sum-a[i])/x == ans ) {cout<<"-1\n";break;}
    if(i==n) cout<<ans<<endl;
    }
    return 0;
}
        
