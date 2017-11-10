#include<iostream>
using namespace std;
int main(){
long long int l,a,b,c,d,t;
ios_base::sync_with_stdio(false);
cin>>t;
while(t--){
cin>>c>>d>>l;

if(c>2*d)
{
if( ( l>=(4*(d+(c-2*d))) && l<=4*(d+c) ) && l%4==0)
cout<<"yes\n";
else cout<<"no\n";
}

else{
if( ( l>=(4*d) && l<=4*(d+c) ) && l%4==0)
cout<<"yes\n";
else cout<<"no\n";
}

}
return 0;
}
