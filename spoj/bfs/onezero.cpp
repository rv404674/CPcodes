//https://www.quora.com/How-can-the-problem-Ones-and-zeros-on-SPOJ-be-solved-using-BFS
#include<iostream>
#include<string.h>
#include<stack>
#include<queue>

using namespace std;
typedef long li;

int parent[20000];
int value[20000];

void bfs(int n){
    queue <int> q;
    q.push(1);
    parent[1]=0;

while(!q.empty()){
    int current=q.front();
    q.pop();

    if(current==0){
        stack <int> s;
        while(parent[current]){
            s.push(value[current]);
            current=parent[current];
        }
        s.push(1);//see line 14 and 15
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
        break;
    }
int    rem=current*10;  
   rem%=n; 
    if(parent[rem]==-1){
        parent[rem]=current;
        value[rem]=0;
        q.push(rem);
    }

rem=current*10+1;
rem%=n;

if(parent[rem]==-1){
    parent[rem]=current;
    value[rem]=1;
q.push(rem);
}

}
}

int main(){
    ios_base::sync_with_stdio(false);
    li n,a,t;
    string s,u;

    cin>>t;
    while(t--){
    cin>>n;
    memset(parent,-1,sizeof(parent));    
    bfs(n);
    }

    
    return 0;
}

       
