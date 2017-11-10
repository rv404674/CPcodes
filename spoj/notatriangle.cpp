#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    vector<int> a;
    int i,j,cnt,t,x,k,n,u;

    while(1){
    cin>>n;
    if(!n) break;

    for(i=0;i<n;i++) {cin>>x;a.push_back(x);}

    sort(a.begin(),a.end());
    cnt=0;

    for(i=0;i<n;i++){
    x=a[i];
    for(j=i+1;j<n;j++){
    k=x+a[j];
    u=upper_bound(a.begin(),a.end(),k)-a.begin();
    cnt+=(n-u);
    }

    }

    cout<<cnt<<endl;
    a.clear();
    }
return 0;
}

