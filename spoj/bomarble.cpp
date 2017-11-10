#include<iostream>
typedef long long lli;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli i,sum,k;

    while(1){
        cin>>k;
        if(k==0) break;
        sum=0;

        if(k==1) cout<<5<<endl;
        else{
sum=0;
            for(i=2;i<=k;i++)
                sum=sum+3*i-4;
            sum+=5*k;
            cout<<sum<<endl;
        }
    }
    return 0;
}
