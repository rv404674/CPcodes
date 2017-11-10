//http://code.cloudkaksha.org/spoj/spoj-aibohp-solution
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);

    int t,i,j;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>s1;
        s2=s1;
        reverse(s2.begin(),s2.end());

        int m,n;
        //as size of both strings are same
        m=n=s1.size();

        int dp[m+1][m+1];

        for(int i=0;i<=m;i++)
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        int ans=m-dp[m][n];
        cout<<ans<<endl;
    }
    return 0;
}

