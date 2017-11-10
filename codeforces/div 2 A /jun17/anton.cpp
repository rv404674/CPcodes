#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;
    set <char> cnt;

    getline(cin,s);
    int i;
    for(i=0;s[i];i++)
        if(s[i]!=',' && s[i]!='{' && s[i]!='}' && s[i]!=' ')
            cnt.insert(s[i]);

    cout<<cnt.size();
return 0;
}

