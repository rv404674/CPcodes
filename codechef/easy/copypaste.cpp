#include<iostream>
#include<set>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long int x,i,t,n;

    set <long int> s;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1;i<=n;i++) {cin>>x;s.insert(x);}
        cout<<s.size()<<endl;
        s.clear();
    }
    return 0;
}
