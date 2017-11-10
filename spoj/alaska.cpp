#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long  int t,i,n;
       while(1){
        cin>>n;

        if(n==0) break;
        long int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);

        for(i=1;i<n;)
            if(a[i]-a[i-1] <=200)
                i++;
            else break;
       
       if(n==1) cout<<"IMPOSSIBLE\n";
       else
       { 
        if(i==n) 
            if( 2*(1422-a[n-1]) <=200) cout<<"POSSIBLE\n";
            else cout<<"IMPOSSIBLE\n";
        else cout<<"IMPOSSIBLE\n";

    }
       }

    return 0;
}
