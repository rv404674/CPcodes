//it is a modified dfs
//logic same as longest path in a tree
#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<utility>//for pair

using namespace std;
#define small
int r,c,mx;
pair<int, int> next;
char grid[1001][1001];


void dfs(int i,int j,int d){
    if(i<0 || i>=r || j<0 || j>=c || grid[i][j]!='.') return ;

    grid[i][j]='v';
    dfs(i+1,j,d+1);
    dfs(i,j+1,d+1);
    dfs(i,j-1,d+1);
    dfs(i-1,j,d+1);
    grid[i][j]='.';

    if(d>mx){
        mx=d;
        next.first=i;//not necessary but if you want to find farthest point also
        next.second=j;
        }
}

int find()
{
	int maxlen = 0;
	if(grid[next.first][next.second]!='.') return 0;
	while(true)
	{
		mx = 0;
		dfs(next.first, next.second, 0);
		if(mx <= maxlen) break;
		else maxlen = mx;
	}
	return maxlen;
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   #ifdef small
    freopen("input","r",stdin);
#endif // small

    int i,j,t;
        cin>>t;
    while(t--){
        cin>>c>>r;
       for(i=0;i<r;i++)
            cin>>grid[i];

        next.first=0;next.second=0;
        for(i=0;i<r;i++)
            for(j=0;j<c;j++){
                if(grid[i][j]=='.')
                {next.first=i;next.second=j;break;}
            }
        cout<<"Maximum rope length is "<<find()<<"."<<endl;
    }
    return 0;
}
