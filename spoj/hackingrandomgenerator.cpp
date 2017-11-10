#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n,k,cnt,i;
    cin>>n>>k;
    cnt=0;
    int a[n];
    for( i=0;i<n;i++) cin>>a[i];
 
    sort(a,a+n);
    for(i=0;i<n;i++)
        if(binary_search(a,a+n,a[i]-k))
         cnt++;

    cout<<cnt;

    return 0;
}
