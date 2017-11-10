#include<iostream>
#include<queue>
#include<vector>
#include<utility>
#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef vector< pii > vi;
typedef vector < vi > vii;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int v,s,t,e,x,y,w,i;

    cin>>v>>s>>t;

    cin>>e;
    vii adj(v);

    while(e--){
        cin>>x>>y>>w;
        adj[x-1].push_back(make_pair(y-1,w));
    }

    int cnt=0;

    priority_queue < pii,vector <pii>, greater <pii> > q;

    vi :: iterator itr;

    for(i=0;i<v;i++){

    vector <int> d(v,99999);
        q.push(pii(i,0));//or (make_pair(i,0));
        d[i]=0;

    while(!q.empty()){
        pii x=q.top();
        q.pop();
        int u1=x.first;int dist=x.second;

        if(dist<=d[u1])//see topcoder tut power of stl
         for(itr=adj[u1].begin();itr!=adj[u1].end();itr++){
             int u2=(*itr).first;int dist2=(*itr).second;
             if(d[u2]>=d[u1]+dist2){
                 d[u2]=d[u1]+dist2;
                 q.push(make_pair(u2,d[u2]));
             }

         }

        }

    if(d[s-1]<=t) cnt++;
    }  

cout<<cnt<<endl;
return 0;
}

        

