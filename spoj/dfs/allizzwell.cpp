#include<iostream>
#include<string.h>
#include<vector>
#include<utility>
#include<string>

using namespace std;
char s[200][200];
int visited[200][200];

int m,n;
string orgstr="ALLIZZWELL";

int xx[]={-1,-1,-1,0,0,1,1,1};
int yy[]={-1,0,1,-1,1,1,0,-1};

int isvalid(int i,int j){
if(i>=0 && i<m && j>=0 && j<n && visited[i][j]==-1) return 1;
return 0;
}


int dfs(int i,int j,int cnt){
if(cnt==9) return 1;
visited[i][j]=1;
int a,k,x,y;
for( k=0;k<8;k++)
{
x=i+xx[k];y=j+yy[k];
if(isvalid(x,y)  && orgstr[cnt+1]==s[x][y])
{a=dfs(x,y,cnt+1);
        if(a==1) return 1;
        }
}

visited[i][j]=-1;
return 0;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,j,t;

    cin>>t;
    while(t--){
        cin>>m>>n;
        char a[m][n];
        vector < pair<int,int> >v;


        for(i=0;i<m;i++)
            for(j=0;j<n;j++){
                cin>>s[i][j];
                if(s[i][j]=='A')
                    v.push_back(make_pair(i,j));
            }
        vector <pair<int,int> > ::iterator itr=v.begin();
        for(;itr!=v.end();itr++){
            int x=(*itr).first;
            int y=(*itr).second;
            
            memset(visited,-1,sizeof(visited));
           // cout<<"rah "<<rah<<x<<y<<endl;
            if(dfs(x,y,0)){
                cout<<"YES\n";
                break;
            }
        }
        if(itr==v.end()) cout<<"NO\n";
    }
    return 0;

}


