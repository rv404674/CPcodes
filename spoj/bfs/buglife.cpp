//bipartite graph
#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
using namespace std;

vector< vector<long int> >adj; 

long int v;
long int colour[2017];

int bfsbipartite(long int u){
    //assigns -1 to all nodes as default
    //then assigns 1 and 0 alternately to nodes
    queue<long int> q;
    //push u not 0 int the queue
    q.push(u);
    colour[u]=1;

    vector <long int>::iterator itr;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        
        for(itr=adj[u].begin();itr!=adj[u].end();itr++){
            if(colour[*itr]==-1)
            {  
                colour[*itr]= !colour[u];//or colour[u]==1?0:1;//assings different colour to child than parent
                q.push(*itr);//no need to use visited array as if colour is -1 than node is not visited
            }
            else if(colour[*itr]==colour[u])
                   return 0;   
        }
    }
    return 1;
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long int x,y,i,e,t;
    int k;
    cin>>t;
    for(long int j=1;j<=t;j++){

        
        cin>>v>>e;
        adj=vector< vector<long int> >(v);

	for(i=0;i<e;i++){
		cin>>x>>y;
		adj[x-1].push_back(y-1);
		adj[y-1].push_back(x-1);
	}

        long int flag=1;
    memset(colour,-1,sizeof(colour));

//this loop is used parts of graph are disconnected .see test case of spoj buglife 2
        for(i=0;i<v;i++)
        {
    if(colour[i]==-1)
         k=bfsbipartite(i);
    if(k==0)
    {flag=0;break;}
                      }


       cout<<"Scenario #"<<j<<":\n";
	if( !flag )//not a bipartite graph
		cout<<"Suspicious bugs found!\n";
	else cout<<"No suspicious bugs found!\n";
        adj.clear();
        
        }

	return 0;
}

