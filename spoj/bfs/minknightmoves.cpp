#include<iostream>
#include<queue>
#include<utility>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
       cin.tie(NULL);

       string s1,s2;
       int i,j,t,dist[8][8],m,n,x,y;
       cin>>t;
       while(t--){
           cin>>s1>>s2;
           for(i=0;i<8;i++)
               for(j=0;j<8;j++)
                   dist[i][j]=-1;

           i=s1[0]-'a';
           j=8-(s1[1]-'0');
   //cout<<i<<" "<<j<<endl;

           x=s2[0]-'a';
           y=8-(s2[1]-'0');
//cout<<x<<" "<<y<<endl;
           queue< pair<int,int> > q;
           q.push(make_pair(i,j));
           dist[i][j]=0;

           
           while(!q.empty()){
               int i=q.front().first;
               int j=q.front().second;
               q.pop();

               if(i-2>=0){
                   m=i-2,n=j-1;
                   if(n>=0 && dist[m][n]==-1){
                       dist[m][n]=dist[i][j]+1;
                       q.push(make_pair(m,n));
                   }
                   n=j+1;
                   if(n<=7 && dist[m][n]==-1){
                       dist[m][n]=dist[i][j]+1;
                       q.push(make_pair(m,n));
                   }

               }

               if(i+2<=7){
                   m=i+2,n=j-1;
                   if(n>=0 && dist[m][n]==-1){
                       dist[m][n]=dist[i][j]+1;
                       q.push(make_pair(m,n));
                   }
                   n=j+1;
                   if(n<=7 && dist[m][n]==-1){
                       dist[m][n]=dist[i][j]+1;
                       q.push(make_pair(m,n));
                   }
               }

              
               if(j-2>=0){
                       m=i-1,n=j-2;
                    if(m>=0 && dist[m][n]==-1){
                           dist[m][n]=dist[i][j]+1;
                        q.push(make_pair(m,n));
                   }
                   m=i+1;
                   if(m<=7 && dist[m][n]==-1){
                       dist[m][n]=dist[i][j]+1;
                       q.push(make_pair(m,n));
                   }

               }

                      if(j+2<=7){
                       m=i-1,n=j+2;
                    if(m>=0 && dist[m][n]==-1){
                           dist[m][n]=dist[i][j]+1;
                        q.push(make_pair(m,n));
                   }
                   m=i+1;
                   if(m<=7 && dist[m][n]==-1){
                       dist[m][n]=dist[i][j]+1;
                       q.push(make_pair(m,n));
                   }

               }
           
           }
           cout<<dist[x][y]<<endl;

       }
       return 0;
}

