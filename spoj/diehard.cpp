//u can use dp,greedy also
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int mxtime,t,m,n;
    cin>>t;

    while(t--){
        mxtime=0;
        cin>>m>>n;
        
        mxtime=1;m+=3;n+=2;
        while(1){
       if(m>5 && n>10){
           m-=2;n-=8;
           mxtime+=2;
       }
       else if(m>20 && n<=10){
           m-=17;n+=7;
           mxtime+=2;}
       else{
           cout<<mxtime<<endl;
           break;
       }

    }
      }

    return 0;
}
