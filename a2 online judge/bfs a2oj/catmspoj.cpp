
#include<iostream>
#include<iomanip>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<utility>
#include<limits.h>
#include<functional>
#include<algorithm>


using namespace std;

int xx[8]={-1,-1,-1,0,0,1,1,1};
int yy[8]={-1,0,1,-1,1,-1,0,1};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;
li r,c,flag=0;
li distm[200][200]={0},distc1[200][200]={0},distc2[200][200]={0};
int visitm[200][200]={0};

void bfsm(li u,li v){
li k,i,j,x,y;

u-=1,v-=1;
queue< pair<li,li> > q;
visitm[u][v]=1;
distm[u][v]=0;
q.push(make_pair(u,v));

while(!q.empty()){
    pair<li,li> p=q.front();
    x=p.first;y=p.second;
    q.pop();


    for(k=0;k<4;k++){
        i=x+dx[k],j=y+dy[k];
        if(i<0 || i>r || j<0 || j>c || visitm[i][j]) continue;
        distm[i][j]=1+distm[x][y];
        visitm[i][j]=1;
    q.push(make_pair(i,j));
    }

}
}



void bfsc1(li u,li v){
li k,i,j,x,y;
int visitc[200][200]={0};


u-=1,v-=1;
queue< pair<li,li> > q;
visitc[u][v]=1;
distc1[u][v]=0;
q.push(make_pair(u,v));

while(!q.empty()){
    pair<li,li> p=q.front();
    x=p.first;y=p.second;
    q.pop();


    for(k=0;k<4;k++){
        i=x+dx[k],j=y+dy[k];
        if(i<0 || i>r || j<0 || j>c || visitc[i][j]) continue;
            distc1[i][j]=1+distc1[x][y];
    q.push(make_pair(i,j));
        visitc[i][j]=1;
    }

}
}


void bfsc2(li u,li v){
li k,i,j,x,y;
int visitc[200][200]={0};


u-=1,v-=1;
queue< pair<li,li> > q;
visitc[u][v]=1;
distc2[u][v]=0;
q.push(make_pair(u,v));

while(!q.empty()){
    pair<li,li> p=q.front();
    x=p.first;y=p.second;
    q.pop();


    for(k=0;k<4;k++){
        i=x+dx[k],j=y+dy[k];
        if(i<0 || i>r || j<0 || j>c || visitc[i][j]) continue;
            distc2[i][j]=1+distc2[x][y];
    q.push(make_pair(i,j));
        visitc[i][j]=1;
    }

}

}





int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
li t,i,j,mx,my,c1x,c2y,c1y,c2x;

cin>>r>>c>>t;

while(t--){
    cin>>mx>>my>>c1x>>c1y>>c2x>>c2y;
   bfsm(mx,my);
/*
   for(i=0;i<r;i++)
       for(j=0;j<c;j++)
            cout<<i<<" "<<j<<" "<<distm[i][j]<<endl;
cout<<endl;
*/


   bfsc1(c1x,c1y);
/*
   for(i=0;i<r;i++)
       for(j=0;j<c;j++)
            cout<<i<<" "<<j<<" "<<distc[i][j]<<endl;

cout<<endl;
*/

   bfsc2(c2x,c2y);
int flag2=0;

/*   for(i=0;i<r;i++)
       for(j=0;j<c;j++)
            cout<<i<<" "<<j<<" "<<distm[i][j]<<endl;

cout<<endl;
*/

   for(i=0;i<r;i++)
       if( ( distm[i][0]<distc1[i][0] && distm[i][0]<distc2[i][0]) || (distm[i][c-1]<distc1[i][c-1] && distm[i][c-1]<distc2[i][c-1])) {
           flag2=1;
           break;
}

if(!flag2)
    for(i=0;i<c;i++)
    if( (distm[0][i]<distc1[0][i] && distm[0][i]<distc2[0][i]) || (distm[r-1][i]<distc1[r-1][i] && distm[r-1][i]<distc2[r-1][i])){
        flag2=1;
        break;
    }

if(flag2) cout<<"YES\n";
else cout<<"NO\n";
}
return 0;
}
