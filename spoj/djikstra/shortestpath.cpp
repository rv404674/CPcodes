#include<bits/stdc++.h>
using namespace std;

typedef long li;

typedef pair<li,li> pii;
typedef vector < pii > vi;
typedef vector < vi > vii;

vii adj;
li n;


li djikstra(li src,li dst){
vector <li> d(n,99999999);
priority_queue < pii,vector <pii>,greater <pii> > q;
q.push(make_pair(src,0));
d[src]=0;

li u1,d1,u2,d2;
vi :: iterator itr;
while(!q.empty())
{
    pii x=q.top();
    u1=x.first,d1=x.second;
    q.pop();

    if(d[u1]>=d1){//if you dont put = it will not work for source
             for(itr=adj[u1].begin();itr!=adj[u1].end();itr++){
            u2=(*itr).first;d2=(*itr).second;
            if (d[u2]>d[u1]+d2){
                d[u2]=d[u1]+d2;
                q.push(make_pair(u2,d[u2]));
            }
                        }

}
}
//for(li i=0;i<n;i++) cout<<d[i]<<endl;
return d[dst];
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
         li t,i,j,dst,wt;

            string s,source,dest;
         cin>>t;
         while(t--){
             cin>>n;
             map <string,li> m;
          adj=vii (n);

             for(i=0;i<n;i++){
                cin>>s;
                m[s]=i;

                cin>>j;
                while(j--){
                    cin>>dst>>wt;
                    adj[i].push_back(pii(dst-1,wt));
                }

             }
                    li qry;
                    cin>>qry;
                    while(qry--){
                        cin>>source>>dest;
                        cout<<djikstra(m[source],m[dest])<<endl;
                    }
                    m.clear();
                    adj.clear();
         }
         return 0;
}













