///nice question on dp
//but 256 byte limit is not good

#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,j,k,l,m,n,t,x,y,dp[6000];
    cin>>t;
     while(t--){
         cin>>n;
         vector <vector <int> >v(n);
         for(i=0;i<n;i++)
         for(j=0;j<i+1;j++)
             {cin>>x;v[i].push_back(x);}
         
         x=(n*(n+1))/2;
         for(i=0;i<n;i++)
             dp[i]=v[n-1][i];

         k=n-2;l=n;m=n-1;

         for(i=n;i<x;)
         {
             for(y=0;y<=k;y++)
             {dp[i]=max(dp[i-l],dp[i-m])+v[k][y];
                 i++;}
             k--;l--;m--;
         }
         cout<<dp[x-1]<<endl;
         v.clear();
     }
     return 0;
}
        

