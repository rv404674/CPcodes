#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;
bool cmp(pair<int,int> &a,pair<int,int> &b){
    double r1=(double) a.first/a.second;
    double r2=(double) b.first/b.second;
    return r1>r2;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int x,n,wt,i,value;
    cin>>n>>wt;

    vector< pair<int,int> >v(n);
    for(i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;}

    sort(v.begin(),v.end(),cmp);
    for(i=0;i<n;i++)
        cout<<v[i].first<<endl;

    value=0;
    vector <int> a(n,0);

    for(i=0;i<n;i++){
            if(wt==0) break;
           x=min(wt,v[i].second);
          value+=x*(v[i].first/v[i].second);
         wt=wt-x;
        a[i]+=x;
    }
   for(i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<"\n";

 cout<<value;
return 0;
}
