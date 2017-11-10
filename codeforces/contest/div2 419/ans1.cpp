#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
int a,b,ans;
char c;
cin>>a>>c>>b;
ans=0;

while(1){
    if(a/10==b%10 && a%10==b/10)
        break;
    b++;
    if(b>=60) a++,b=0;
    if(a>=24) a=0;
    ans++;}
cout<<ans;

return 0;

}

