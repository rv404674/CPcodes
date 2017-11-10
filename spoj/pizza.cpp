#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,a4,a3,a2,ans,x,y;
  char op;

    cin>>t;
    a4=a3=a2=ans=0;
    while(t--){
        cin>>x>>op>>y;
        if(x==3) a3++;
        else if(y==2) a2++;
        else if(y==4) a4++;
    }

    ans=a3;
    a4-=a3;
    ans+=(a2-(a2%2))/2;
    if(a2%2){
        ans++;
        a4-=2;}
    
    if(a4>0){
    ans+=(a4-(a4%4))/4;
    if(a4%4>0)
        ans++;}

    cout<<ans+1 ;
    return 0;
}


