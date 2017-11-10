#include<iostream>
using namespace std;

int prime(int n){
int k,j;
k=0;
    
if(n%2==0){
    k++;
    while(n%2==0) n/=2;}

for(j=3;j*j<=n;j+=2){
    if(n%j==0){
        k++;
        while(n%j==0)
            n/=j;}
}
if(n>1) k++;
return k;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,t,k,i,x;
    cin>>t;
    while(t--){
        cin>>n;
        x=0;
        for(i=29;;i++){
            k=0;
            k=prime(i);
            if(k>=3) x++;
            
            if(x==n){
                cout<<i<<endl;break;}
        }
    }
    return 0;
}
