#include<iostream>
#include<vector>
#include<queue>
#include<string.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int x,y,e,v,i;
    cin>>v>>e;

    vector <int> adj[v];
    for(i=1;i<=e;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int visited[v];int dist[v];
    memset(visited,0,sizeof(visited));
    memset(dist,-1,sizeof(dist));

    visited[0]=1;dist[0]=0;
    queue<int> bfsq;
    bfsq.push(0);

    vector <int>::iterator itr;
    while( !bfsq.empty() ){
        int u=bfsq.front();
        bfsq.pop();

        for(itr=adj[u].begin();itr!=adj[u].end();itr++){
            if(!visited[*itr]){
                visited[*itr]=1;
                dist[*itr]=dist[u]+1;
                //cout<<dist[*itr]<<endl;
                bfsq.push(*itr);}
        }

    }
for(i=0;i<v;i++)
    cout<<dist[i]<<" ";
return 0;
}


