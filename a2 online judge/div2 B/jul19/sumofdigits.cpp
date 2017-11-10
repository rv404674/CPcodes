#include<bits/stdc++.h>
using namespace std;

string tostring(long x){
stringstream ss;
ss<<x;
return ss.str();
}


int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

int i,j,cnt;
long sum;
string s;
cin>>s;

cnt=sum=0;
while(1){
sum=0;
if(s.size()==1) {cout<<cnt;return 0;}

for(i=0;s[i];i++)
sum+=s[i]-'0';

s=tostring(sum);
cnt++;
}
}

