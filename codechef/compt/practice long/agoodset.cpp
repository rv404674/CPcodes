#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,n,i,x;
    cin>>t;

    while(t--){
        cin>>n;
        if(n==1) cout<<"7\n";
         else if(n==2) cout<<"1 2\n";
        else if(n==3) cout<<"1 2 4\n";
        else{
            cout<<"1 2 4";
            x=4;
            for(i=3;i<n;i++) {cout<<" "<<x+3;x=x+3;}
            cout<<endl;
        }
    }
    return 0;
}
            

