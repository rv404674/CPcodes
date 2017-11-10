#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
string s,x;
char u,v;
int flag,flag2,val,val1;

flag=1;
while(1){
getline(cin,s);
stringstream ss(s);

if(s[0]=='*') break;
u=tolower(s[0]);

flag=1;
while(ss>>x){
    v=tolower(x[0]);
    if(v!=u) {flag=0;break;}
}
if(flag) cout<<"Y\n";
else cout<<"N\n";

}

return 0;
}
