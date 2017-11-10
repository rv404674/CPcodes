#include<iostream>
#include<string.h>

using namespace std;
bool check[2101];
int sum;

void sieve(){
    memset(check,true,sizeof(check));

    int i,j;
    for(i=2;i*i<=2100;i++)
        if(check[i])
            for(j=i*i;j<=2100;j+=i)
                check[j]=false;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,sum,i,x1,x2;
    cin>>t;

    sieve();
    while(t--){
        cin>>x1>>x2;
        sum=x1+x2;

    for(i=2;i<=2100;i++)
        if(check[i] && i>sum)
        {cout<<i-sum<<endl;break;}

    }
    return 0;
    }
