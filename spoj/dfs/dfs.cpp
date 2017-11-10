//dfs for undirected graph
#include<iostream>
#include<vector>

using namespace std;

void dfsvisit(int u,vector <int> adj[],vector <bool> &visited){
visited[u]=true;
cout<<u<<" ";
for(int i=0;i<adj[u].size();i++){
if( visited[adj[u][i]] == false)
dfsvisit(adj[u][i],adj,visited);
}
}

void dfs(vector <int> adj[],int v){
	vector <bool> visited(v,false);
	for(int u=0;u<v;u++)
          if(visited[u]==false)
		  dfsvisit(u,adj,visited);
}

int main(){
	int i,e,v,x,y;
	cout<<"enter the number of vertices and edges";
	cin>>v>>e;
        
	vector <int> adj[v];
	for(i=0;i<e;i++){
        cin>>x>>y;
	adj[x].push_back(y);
	adj[y].push_back(x);}

	dfs(adj,v);
	return 0;}
     
	
