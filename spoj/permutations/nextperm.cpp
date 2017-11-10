#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i,t;
    cin>>t;

    while(t--)
    {    cin>>n;
    int a[n];
    for(i=0;i<n;i++) a[i]=i+1;
    
    do{
        for(i=0;i<n;i++) cout<<a[i];
    cout<<endl;
    }while(next_permutation(a,a+n));
    
    }

return 0;
}
