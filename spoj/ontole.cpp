#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    long int n,i,u,x;
    cin>>n;
    vector<long int> v;//dont use vector<long int>v[n] as push_back() will not work with it
    for(i=0;i<n;i++)
    {cin>>x;v.push_back(x);}

    sort(v.begin(),v.end());
    for(i=0;i<n;)
    {u=upper_bound(v.begin(),v.end(),v[i])-v.begin();
        if(u-i ==1){cout<<v[i];break;}
        i=u;
    }

    return 0;
}

