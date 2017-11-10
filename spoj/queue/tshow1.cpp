#include<iostream>
#include<queue>
#include<string>

typedef long long lli;
using namespace std;

void amusing(lli n){
    queue<string> q;
    lli cnt=0;

    q.push("");
    string s1,s2;
while(cnt<=n){
    s1=q.front();
    q.pop();
    s2=s1;

    q.push(s1.append("5"));
    cnt++;
    if(cnt==n){
        cout<<s1<<endl;
        break;}

    q.push(s2.append("6"));
    cnt++;
    if(cnt==n){
        cout<<s2<<endl;
        break;
    }
}
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
     lli n,t;
     cin>>t;

     while(t--){
         cin>>n;
         amusing(n);
     }
     return 0;
}


