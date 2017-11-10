#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long int n,i,cnt;
    cin>>n;

    string s,s1,s2;
    vector <string> v;
    for(i=0;i<n;i++) {cin>>s;v.push_back(s);}

    for(i=cnt=0;i<n-1;i++)
    {s1=v[i];s2=v[i+1];
        if(s1[s1.size()-1]==s2[0]) cnt++;}

    cout<<cnt+1<<endl;
    return 0;
}
