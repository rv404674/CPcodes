#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n,m,l,r,mx,x,i;
    vector <int> v;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>x;v.push_back(x);}

    cin>>m;
    while(m--){
        cin>>l>>r;
     mx=*max_element(v.begin()+l-1,v.begin()+r);
     cout<<mx<<endl;
    }
return 0;
}
