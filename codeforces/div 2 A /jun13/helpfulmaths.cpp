#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;
    vector <int> v;

    int i;
        cin>>s;
    for(i=0;i<s.size();i++) 
        if(s[i]!='+') v.push_back(s[i]-'0');

    sort(v.begin(),v.end());
    cout<<v[0];
    for(i=1;i<v.size();i++) cout<<"+"<<v[i];
    return 0;
}
