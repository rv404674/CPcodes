///important question to do on bfs
//http://spoj-solutions.blogspot.in/2014/08/ppath-prime-path.html

#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

bool prime[10009];

//true indicates not prime
void segsieve(){
    memset(prime,false,sizeof(prime));
    int i;
    for(i=2;i*i<=10009;i++)
    {
        if(!prime[i])
            for(int j=i*i;j<=10009;j+=i)
                prime[j]=true;
    }
}

int contonum(int *a){
    int sum=0;
    for(int i=0;i<4;i++)
        sum=sum*10+a[i];
    return sum;
}

void contoarr(int x,int *a){
    int k;
    k=3;
    while(x){
        a[k--]=x%10;
        x/=10;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    segsieve();
    int t,x,y,num,i,j,n,a[4];
    int dist[10009];
    cin>>t;

    while(t--){
        cin>>x>>y;
        memset(dist,-1,sizeof(dist));
        dist[x]=0;

        queue <int> q;
        q.push(x);
        while(!q.empty()){
            num=q.front();
            q.pop();
          
            for(i=3;i>=0;i--)
            {
                contoarr(num,a);
                for(j=0;j<=9;j++)
                {
                    a[i]=j;
                   n=contonum(a);

                   if(!prime[n] && dist[n]==-1 && n>=1000){
                       dist[n]=dist[num]+1;
                       q.push(n);}
                }
            }
        }
        
        /// use these form of comments
        dist[y]==-1?cout<<"Impossible\n":cout<<dist[y]<<endl;
    }
    return 0;
}

