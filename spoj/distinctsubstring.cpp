#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s1,s2;
    set<string> s;

    int t,i,j,k,n;
    long int cnt;
    cin>>t;

    while(t--){
        cin>>s1;
        cnt=0;
            k=1;
   n=s1.size();

    for(i=0;i<n;i++){
        for(j=0;j<=n-k;j++){
            s2=s1.substr(j,k);
            s.insert(s2);
        }
        k++;
        cnt+=s.size();
        s.clear();
    }

    cout<<cnt<<endl;
    }

    return 0;
}
