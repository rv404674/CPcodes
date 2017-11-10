//http://www.geeksforgeeks.org/prims-algorithm-using-priority_queue-stl/

#include<bits/stdc++.h>
using namespace std;

#define MAX 1e8
typedef pair<long long int,long long int> pii;
long long int v;
long long int weight=0;

vector<pii> adj[100000];

void prim(){

    vector <long long int> key(v,MAX);
    vector <bool> inmst(v,false);
    vector <long long int> parent(v,-1);

    long long  int u,y,x,x2,V,wt;

    vector <pii> ::iterator itr;

    priority_queue< pii,vector<pii>,greater<pii> > pq;

   pq.push(make_pair(0,0));//weight,vertex;
   key[0]=0;
   
   while(pq.empty()==false){

       //weight+=pq.top().first;
       //cout<<weight;
        x=pq.top().second;
     pq.pop();
        inmst[x]=true;
        
        for(itr=adj[x].begin();itr!=adj[x].end();itr++){
                    
            V=(*itr).first;//vertex
         wt=(*itr).second;//weight
         if(inmst[V]==false && key[V]>wt){
             key[V]=wt;
          //   cout<<key[V];
             pq.push(make_pair(key[V],V));
             parent[V]=u;
         }

     }
   }
   for(long long int i=0;i<v;i++)
              weight+=key[i];

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    long long int e,i,w,u1,v1;
    long long int p,t;
     
    cin>>t;
while(t--){
cin>>p;    
        cin>>v>>e;

    for(i=0;i<e;i++){
        cin>>u1>>v1>>w;

adj[u1-1].push_back(make_pair(v1-1,w*p));
adj[v1-1].push_back(make_pair(u1-1,w*p));
    }
       prim();
    cout<<weight;
    weight=0;
}

return 0;
}


