#include<iostream>
#include<string>

using namespace std;

string s1,s2;

bool check(){
    int i,j;
    for(i=j=0;i<s1.size();i++){
        while(j<s2.size())
        {if(s1[i]==s2[j]) break;
            else j++;}

        if(j==s2.size()) return false;
        j++;}

    return true;
}



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,i,j;

    cin>>t;
    while(t--){
        cin>>s1>>s2;
        
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
