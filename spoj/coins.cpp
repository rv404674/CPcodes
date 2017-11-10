#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
long int  c,m,k,l,i,lar;
    cin>>k>>l>>m;
    
    lar=-999;
    long int a[m];
    for(i=0;i<m;i++)  {cin>>a[i];if(a[i]>lar) lar=a[i];}
   

    char win[lar+1];
    win[0]='l';win[1]='w';

    for(i=2;i<=lar;i++){
        if(win[i-1]=='l') win[i]='w';
        else if(i-k>=0 && win[i-k]=='l') win[i]='w';
        else if(i-k>=0 && win[i-l]=='l') win[i]='w';
        else win[i]='l';
    }

    for(i=0;i<m;i++)
        if(win[a[i]]=='w') cout<<"A";
        else cout<<"B";


    
    return 0;
}
