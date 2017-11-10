#include<iostream>
using namespace std;

int a[100][100],m,n;
int mx=-999;

void dpmaxstone(int i,int j,int count){
    if(i<0 || i>=m || j<0 && j>=n) return ;
        count+=a[i][j];
    dpmaxstone(i+1,j-1,count);
    dpmaxstone(i+1,j,count);
    dpmaxstone(i+1,j+1,count);
    
    if(count>mx) {mx=count;cout<<mx<<endl;}
}

int main(){
    ios_base::sync_with_stdio(false);
    int t,i,j,x;
    cin>>t;

    while(t--){
        cin>>m>>n;
     for(i=0;i<m;i++)
         for(j=0;j<n;j++)
             cin>>a[i][j];

     for(i=0;i<n;i++)
        dpmaxstone(0,i,0);

    //dpmaxstone(0,j,0);
    cout<<mx<<endl;
    mx=-999;
    }
    return 0;
}

