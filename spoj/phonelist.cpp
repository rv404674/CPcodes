#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,j,t,n,len;
    string copy,prev,s;
    vector<string> v;
    cin>>t;

    while(t--){
        cin>>n;

        for(i=0;i<n;i++)
        {cin>>s;v.push_back(s);}
        sort(v.begin(),v.end());
prev="asasasa";


        for(i=0;i<n;i++)
        { len=prev.size();
             copy=v[i].substr(0,len);
            if(prev==copy){
                cout<<"NO\n";break;}
        prev=v[i];
        }

     if(i==n)
      cout<<"YES\n";
    }
    return 0;
}
