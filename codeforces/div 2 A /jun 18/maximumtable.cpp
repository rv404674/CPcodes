#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,j,n;

    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if(i==0)
                a[i][j]=1;
            else{
                if((j-1)>=0)
                    a[i][j]=a[i-1][j]+a[i][j-1];
                else 
                    a[i][j]=a[i-1][j];
            }
        }
    }
    cout<<a[n-1][n-1];
    return 0;
}
