//vertex cover
//https://stackoverflow.com/questions/28067639/spoj-vertex-cover-pt07x-wrong-answer
#include<iostream>
#include<vector>

using namespace std;
typedef long li;

vector < vector<li> > adj;
vector <bool> visited;
vector <bool> included;

li n;
li cnt=0;

bool dfs(li u){
    visited[u]=true;
    vector <li> ::iterator itr;
    for(itr=adj[u].begin();itr!=adj[u].end();itr++)
        if(!visited[*itr])
        if(!dfs(*itr) && !included[u]){
            included[u]=true;
            cnt++;
        }
        return included[u];
    }

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    li x,y,i;

    cin>>n;
    adj=vector < vector<li> > (n);
    visited=vector <bool> (n,false);
    included=vector <bool> (n,false);
    
    for(i=0;i<n;i++){
        cin>>x>>y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }
    dfs(0);
    cout<<cnt;
    return 0;
}
