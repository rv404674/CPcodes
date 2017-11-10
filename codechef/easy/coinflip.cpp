#include<iostream>
using namespace std;

typedef long li;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    li t,g,n,i,q,nh,nt;

    cin>>t;
    while(t--){
        cin>>g;
         while(g--){
             cin>>i>>n>>q;
                                
             if(n%2==0){
                nh=nt=n/2;}
                 else{
                 if(i==1){nt=n/2+1;nh=n/2;}
                 else {nh=n/2+1;nt=n/2;}
             }

                if(q==1) cout<<nh<<endl;
                else cout<<nt<<endl;
         }

    }
    return 0;
}


