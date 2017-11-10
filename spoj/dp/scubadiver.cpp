//nice question
////https://stackoverflow.com/questions/25458004/spoj-scubadiv-recursive-dp-approach 
#include<iostream>
#include<string.h>


int w[1001],o[1001],n[1001];
int dp[1024][80][80];
using namespace std;
#define inf 9999999;

int dpscuba(int x,int i,int j){
 if(dp[x][i][j]!=-1) 
        return dp[x][i][j];

 
    if( i==0 && j==0)  dp[x][i][j]=0;
    else if(x==0)    { dp[x][i][j]=inf;}
    else  
    dp[x][i][j]=min(w[x-1]+dpscuba(x-1,max(i-o[x-1],0),max(j-n[x-1],0)),dpscuba(x-1,i,j));
    //weight of o2 and n2  can't be -ve so we have taken max;
    //weight of xth cylin. is stored in w[x-1] 
//either we select ith cylinder or move to i-1 cylinder
//careful about the indexes
    return dp[x][i][j];
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t,x,i,oxreq,nreq;

    cin>>t;
    while(t--){
        cin>>oxreq>>nreq;

        cin>>x;
        for(i=0;i<x;i++)
            cin>>o[i]>>n[i]>>w[i];
        memset(dp,-1,sizeof(dp));

cout<<dpscuba(x,oxreq,nreq)<<endl;
    }
    return 0;
}


