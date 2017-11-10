#include<iostream>
#include<string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s1,s2;
    int i;

    cin>>s1>>s2;
    for(i=0;i<s1.size();i++)
        if(s1[i]<'a') s1[i]=s1[i]-'A'+'a';

    for(i=0;i<s2.size();i++)
        if( s2[i]<'a') s2[i]+='a'-'A';

    if(s1==s2)
        cout<<0;
    else if(s1>s2) cout<<1;
    else cout<<"-1";
    return 0;
}
