//unordered set is allowed only in c++11
#include<bits/stdc++.h>

using namespace std;

 int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);


int t,x,y,i,n;
cin>>n;
 int a[n];
for(i=0;i<n;i++) cin>>a[i];

set<int> s;
cin>>t;
while(t--){

cin>>x>>y;
for(i=x-1;i<y;i++) s.insert(a[i]);
cout<<s.size()<<endl;
s.clear();
}
return 0;
}

