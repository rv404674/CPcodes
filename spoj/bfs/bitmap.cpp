//https://www.quora.com/How-can-I-solve-SPOJ-Bitmap-problem
//bfs good q
#include<bits/stdc++.h>

using namespace std;
int m,n;
 int a[200][200];
//x and y are for taking neighbour elements
 int x[3]={-1,0,1};
int y[3]={-1,0,1};

void bfsq(pair<int,int> p){
queue < pair<int,int> > q;
q.push(p);
int i,j,xx,yy,l,r;

while(!q.empty()){
  xx=q.front().first;
 yy=q.front().second;
    q.pop();

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            l=xx+x[i];
            r=yy+y[j];
            // abs(x[i])!=abs(y[j) is checked for diagnol elements ,see x and y array above
            if(abs(x[i])!=abs(y[j])  && l>=0 && l<m && r>=0 && r<n && a[l][r]>a[xx][yy]+1){
                a[l][r]=1+a[xx][yy];
                q.push(make_pair(l,r));
            }
        }
    }
}

}

int main(){
    ios_base::sync_with_stdio(false);
    int t,i,j;
    string str;
    
    cin>>t;
     while(t--){
        vector< pair<int,int> >v;

        cin>>m>>n;
        for(i=0;i<m;i++)
        {      cin>>str;

            for(j=0;j<n;j++){
                a[i][j]=str[j]-'0';
                  if(a[i][j]==1){
                      a[i][j]=0;
                      v.push_back(make_pair(i,j));}
                  else
                  a[i][j]=10000;
            }
     }


        for(i=0;i<v.size();i++)
            bfsq(v[i]);
        for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;}

     }
     return 0;
}



