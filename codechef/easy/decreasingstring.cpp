#include<iostream>
#include<string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t,k,x,y,i,j;
    cin>>t;
    while(t--){
        cin>>k;

        if(k<=25){
            for(;k>=0;k--) cout<<(char)('a'+k);
            cout<<endl;
        }
        else if(k%25==0){
            x=k/25;
            for(i=1;i<=x;i++)
                for(j=0;j<=25;j++) cout<<(char)('z'-j);
            cout<<endl;
        }
        else{
            x=k%25;y=k/25;
            for(;x>=0;x--) cout<<(char)('a'+x);
            for(i=1;i<=y;i++)
               for(j=0;j<=25;j++) cout<<(char)('z'-j);
           cout<<endl;
        }
    }

    return 0;
}
