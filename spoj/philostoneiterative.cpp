//first make an recursive solution
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t,m,n,i,j,mx;
    cin>>t;
    while(t--){
        cin>>m>>n;
        int a[m][n];

        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                cin>>a[i][j];
            
        mx=-1;
        for(i=0;i<n;i++)
            mx=max(a[0][i],mx);
        for(i=1;i<m;i++)
        {mx=-1;
            for(j=0;j<n;j++){
                if(j>0 && j<n-1)
                    a[i][j]=max(a[i-1][j-1],max(a[i-1][j],a[i-1][j+1]))+a[i][j];
                else if(j<n-1)//means j=0
                    a[i][j]=max(a[i-1][j],a[i-1][j+1])+a[i][j];
                else if(j>0)
                    a[i][j]=max(a[i-1][j-1],a[i-1][j])+a[i][j];
            mx=max(mx,a[i][j]);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}


