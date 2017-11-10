#include<iostream>
#include<string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s1;

    int t;
    cin>>t;
    while(t--){
        cin>>s1;
        if(s1.find("010")!=-1) cout<<"Good\n";
        else if(s1.find("101")!=-1) cout<<"Good\n";
        else cout<<"Bad\n";

    }
    return 0;
}
