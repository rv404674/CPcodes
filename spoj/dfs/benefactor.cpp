#include<iostream>
#include<vector>

using namespace std;
int m=-1,q;
vector< vector <pair <int,int> > > adj;   

void dfs(int u,int count,vector<bool> &visited){
    visited[u]=true;

      for(int i=0;i<adj[u].size();i++)
          if(! (visited[adj[u][i].first]) )
              dfs(adj[u][i].first,count+adj[u][i].second,visited);
      if(count>m)
      {m=count;
          q=u;
     }

}


 int main(){
    int a,t,v,e,i,x,w,y;
    cin>>t;

    while(t--){
    cin>>v;
    e=v-1;
    //vector< pair<int,int> > adj[v];
    vector<bool> visited(v,false);
    adj=vector< vector <pair <int,int> > > (v);   

    while(e--){
         cin>>x>>y>>w;
         adj[x-1].push_back(make_pair(y-1,w));
         adj[y-1].push_back(make_pair(x-1,w));
     }

     dfs(0,0,visited);
     m=-1;

     for(i=0;i<v;i++)
         visited[i]=false;

     dfs(q,0,visited);
     cout<<m<<endl;
     }


     return 0;
}


