#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int d,i,n,j,t,m,x;
    vector<int> v; 
    vector<int> :: iterator itr;

    cin>>t;

    while(t--){
        cin>>n>>m>>d;

        for(i=0;i<n;i++)
        {cin>>x;v.push_back(x);}

        for( j=1;j<=m;j++){
             itr=max_element(v.begin(),v.end());
             int mx=*itr;
  //          cout<<mx<<endl;
             mx-=d;
            
             if(mx<=0) break;
             int k=itr-v.begin();
             v[k]-=d;
        }
//cout<<"j "<<j<<m<<"m";

        if(j== m+1)
            cout<<"YES\n";
        else cout<<"NO\n";
    v.clear();

    }

    return 0;
}

