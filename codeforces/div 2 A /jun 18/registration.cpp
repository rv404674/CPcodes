#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;    
int n;
    cin>>n;
    map <string,int> m;
    while(n--){
        cin>>s;
        if(m[s]) cout<<s<<m[s]<<endl;
        else cout<<"OK\n";
        m[s]++;
    }
    return 0;
}


