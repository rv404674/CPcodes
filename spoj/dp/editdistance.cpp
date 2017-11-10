#include<iostream>
#include<string>

using namespace std;

int editdistance(string s1,string s2,int m,int n){
int dp[m+1][n+1];

for(int i=0;i<=m;i++)
    for(int j=0;j<=n;j++){
        if(i==0)
            dp[i][j]=j;
        else if(j==0) dp[i][j]=i;
        else if(s1[i-1]==s2[j-1])//dont use s1[i]=s2[j] as i<=m and j<=n,but s1 last index is m-1,s2 last index is n-1
            dp[i][j]=dp[i-1][j-1];
        else
            dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
    }
return dp[m][n];
}


int main(){
    ios_base::sync_with_stdio(false);
    int t;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        cout<<editdistance(s1,s2,s1.size(),s2.size())<<endl;
    }
    return 0;
}

