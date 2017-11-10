#include<iostream>
#include<string.h>

using namespace std;
string s;
int dp[300],n;

int rock(int i){
    if(i==n) return 0;
    if(dp[i]!=-1) return dp[i];

    int st,sr,ans;
    st=sr=0;
    ans=-1;

    for(int k=i;k<n;k++){
        if(s[k]=='1') st++;
        else sr++;
        if(st>sr)
           ans=max(ans,rock(k+1)+st+sr);
        else ans=max(ans,rock(k+1));
    }
    return ans;
}



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){

        cin>>n>>s;
        memset(dp,-1,sizeof(dp));
        cout<<rock(0)<<endl;
    }
    return 0;
}


