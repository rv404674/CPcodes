#include<iostream>
#include<string>
#include<utility>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,j,k,n,q;
    string s1,s2,x,s;

    cin>>n>>q;
    vector < pair<string,string> > v;
    while(n--){
        cin>>s1>>s2;
        v.push_back(make_pair(s1,s2));
    }

    while(q--){
        cin>>x;
        int k=-1;
        for(i=x.size()-1;i>=0;i--) 
            if(x[i]=='.') {k=i;break;}

        if(k!=-1) s=x.substr(k+1,x.size()-(k+1));
        for(i=0;i<v.size() && k!=-1;i++)
        {
            if(v[i].first==s) {cout<<v[i].second<<endl;break;}
        }
        if(i==v.size() || k==-1) cout<<"unknown\n";
    }
    return 0;
}
