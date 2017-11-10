#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long int x,y,n1,n2,k,m,i;

    cin>>n1>>n2;
    cin>>k>>m;

    long int a[n1];
    vector <long int> b;

    for(i=0;i<n1;i++) cin>>a[i];
    for(i=0;i<n2;i++) {cin>>x;b.push_back(x);}

    x=upper_bound(b.begin(),b.end(),a[k-1])-b.begin();
    x=n2-x;
    if(x>=m) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}




