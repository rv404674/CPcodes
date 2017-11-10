#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long int m,sum,l,i,n,maxi;

    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];

    maxi=sum=l=0;

    for(i=0;i<n;i++){
        sum+=a[i];
        while(m<sum){
            sum-=a[l];
            l++;
            if(sum>=maxi && sum<=m){
                maxi=sum;
                break;}
        }
        if(sum>=maxi && sum<=m)
            maxi=sum;
    }

cout<<maxi;
return 0;
}

