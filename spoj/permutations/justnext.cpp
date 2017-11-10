#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];

        for(i=0;i<n;i++) cin>>a[i];
        if(next_permutation(a,a+n))
        {for(i=0;i<n;i++) cout<<a[i];cout<<endl;}
        else cout<<-1<<endl;
    }
    return 0;
}
