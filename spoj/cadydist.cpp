#include<iostream>
#include<algorithm>

typedef long long lli;
using namespace std;

int main(){
    lli n,sum;

    while(1){
        cin>>n;
        if(n==0) break;
        lli c[n],p[n],i;
        for(i=0;i<n;i++) cin>>c[i];
        for(i=0;i<n;i++) cin>>p[i];

        sort(c,c+n);
        sort(p,p+n,greater<int> ());
        sum=0;
        for(i=0;i<n;i++) 
            sum+=c[i]*p[i];

        cout<<sum<<endl;
    }
    return 0;
}
