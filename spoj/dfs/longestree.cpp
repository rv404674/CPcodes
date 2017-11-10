#include<iostream>
#include<vector>

using namespace std;
int m=-1,q;
   
void dfs(int i,int count,vector<bool> &visited,vector <int> adj[]){
    visited[i]=true;
      for(int u=0;u<adj[i].size();u++)
          if(!visited[adj[i][u]])
              dfs(adj[i][u],count+1,visited,adj);
      if(count>m)
      {m=count;
          q=i;
      }

}


 int main(){
    int a,v,e,i,x,y;
    cin>>v;
    e=v-1;
    vector<int> adj[v];
    vector<bool> visited(v,false);
     while(e--){
         cin>>x>>y;
         adj[x-1].push_back(y-1);
         adj[y-1].push_back(x-1);
     }
     dfs(0,0,visited,adj);
     m=-1;

     for(i=0;i<v;i++)
         visited[i]=false;

     dfs(q,0,visited,adj);
     cout<<m<<endl;
     return 0;
}

