#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    long long int t,n,i,w1,w2,k,dpmin,j;
    cin>>t;
    
    while(t--){
    cin>>w1>>w2;
    k=w2-w1;
    long long int dpprice[k+1];
    cin>>n;
    long long int w[n],p[n];
    for(i=0;i<n;i++){
        cin>>p[i]>>w[i];}

    dpprice[0]=0;
    for(i=1;i<=k;i++){
        dpmin=99999999;
        for(j=0;j<n;j++){
            if(i>=w[j])
            dpmin=min(dpmin,p[j]+dpprice[i-w[j]] );
        }
        dpprice[i]=dpmin;
    }

    if(dpmin==99999999)
        cout<<"This is impossible.\n";
    else
    cout<<"The minimum amount of money in the piggy-bank is "<<dpprice[k]<<"."<<endl;
    }

    return 0;
}

    
