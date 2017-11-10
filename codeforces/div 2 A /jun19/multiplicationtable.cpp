#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long int i,x,n,cnt;

        cin>>n>>x;
        for(i=1,cnt=0;i<=n;i++)
            if(x%i==0) 
                if(x/i<=n) cnt++;
        cout<<cnt<<endl;
    return 0;
}
