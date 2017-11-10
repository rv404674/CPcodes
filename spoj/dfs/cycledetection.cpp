//dfs for undirected graph
#include<iostream>
#include<vector>
using namespace std;

int v;
bool iscyclicutil(vector<int> adj[],vector<bool>& visited,int u,int parent){//error if we write vector<int> &adj
visited[u]=true;
for(int i=0;i<adj[u].size();i++){
	if( !visited[adj[u][i]] )
	{
	if(iscyclicutil(adj,visited,adj[u][i],u))
		return true;
	   }
	else if(parent!=adj[u][i])
                   return true;
		   }
return false;
}


bool iscyclic(vector <int> adj[],int v){
vector<bool> visited(v,false);
for(int i=0;i<v;i++)
	if(!visited[i])
		if(iscyclicutil(adj,visited,i,-1))
			return true;
return false;

}

int main(){
	int x,y,i,e;
	cin>>v>>e;
	
	vector<int> adj[v];

	for(i=0;i<5;i++){
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	if( iscyclic(adj,v) )// a cycle or not
		cout<<"yes\n";
	else cout<<"no\n";

	return 0;
}
