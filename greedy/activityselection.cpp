#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

bool cmp(pair<long int,long int> a,pair<long int,long int> b){
    return a.second<b.second;}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long int t,x,y,n,i,k,m,noofact;
    
    cin>>t;
    while(t--){
        cin>>n;
        vector< pair<long int,long int> >v(n);
        for(i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;}

        sort(v.begin(),v.end(),cmp);//always remember sort(a,a+n) works for static array
        noofact=1;
        k=0;
        for(m=1;m<n;m++){
            if(v[m].first>=v[k].second){
                k=m;
                noofact++;}
        }
        cout<<noofact<<endl;
    }
    return 0;
}
