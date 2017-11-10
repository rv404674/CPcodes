#include<iostream>
#include<vector>
using namespace std;

char a[51][51];
int visited[51][51];
int maxlen,m,n;

int x[8]={-1,-1,-1,1,1,1,0,0};
int y[8]={-1,0,1,1,0,-1,-1,1};

void dfstraversal(int i,int j,int dfsdepth){
maxlen=max(maxlen,dfsdepth);

for(int l=0;l<8;l++){
    int xx=x[l]+i;
    int yy=y[l]+j;

    if(xx>=0 && xx<m && yy>=0 && yy<n && visited[xx][yy]==0){
       if(a[xx][yy] == a[i][j]+1){
        visited[xx][yy]=1;
        dfstraversal(xx,yy,dfsdepth+1);
    }

}
}

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t,i,j;
     t=1;
    while(1){
        cin>>m>>n;
        maxlen=0;
        if(m==0 && n==0)
            break;

        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {cin>>a[i][j];visited[i][j]=0;}
        
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    if(a[i][j]=='A')
    {visited[i][j]=1; dfstraversal(i,j,1);}

                cout<<"Case "<<t++<<": "<<maxlen<<endl;
    }
return 0;
}


        
