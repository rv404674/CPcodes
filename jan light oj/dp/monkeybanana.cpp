#include<iostream>
#include<string.h>
using namespace std;


typedef long li;
li a[210][210];
li dp[210][210];

li k;
li maxbanana(li i,li j){
if(i==(k-1)  && j==0) return a[i][j];
if(j<0 || a[i][j]==-1) return 0;

if(dp[i][j]!=-1) return dp[i][j];

if(i<k/2)
return dp[i][j]=a[i][j]+max(maxbanana(i+1,j),maxbanana(i+1,j+1));
else return dp[i][j]=a[i][j]+max(maxbanana(i+1,j-1),maxbanana(i+1,j));
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    li r,t,n,i,j,l,x;

    cin>>t;
    for(r=1;r<=t;r++){
        cin>>n;
       
        k=2*n-1;
        memset(a,-1,sizeof(a));
       memset(dp,-1,sizeof(dp));

       x=k/2;
        for(i=0;i<k;i++){
            if(i<=k/2){
                for(j=0;j<=i;j++) cin>>a[i][j];
            }
            else
            {
                l=x--;
                for(j=0;j<l;j++) cin>>a[i][j];
            }
        }

        cout<<"Case "<<r<<": "<<maxbanana(0,0)<<endl;
    }
    return 0;
}



