#include<iostream>
#include<string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;
    int t;
    cin>>t;
    while(t--){
cin>>s;
    if(s.size()<=10) cout<<s<<endl;
    else
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
}
    return 0;
}
