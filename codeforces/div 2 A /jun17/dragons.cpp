#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;



typedef long long lli;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli n,i,orgstr;
long int x,y;

    cin>>orgstr>>n;
    vector < pair<long int,long int> > v;

    for(i=0;i<n;i++) {cin>>x>>y;v.push_back(make_pair(x,y));}
    sort(v.begin(),v.end());

    for(i=0;i<v.size();i++)
        if(orgstr>v[i].first) orgstr+=v[i].second;
        else break;

    if(i==v.size()) cout<<"YES";
    else cout<<"NO";
    return 0;
}

