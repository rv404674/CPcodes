#include<iostream>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

int a[1100],visit[1100];
int n;
int check(){
    for(int i=1;i<=n;)
        if(visit[i]!=-1) i++;
        else return i;
    return 0;
}
            
 int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,pos,init,x,cnt;

    vector <int> v;

   cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    memset(visit,-1,sizeof(visit));
cnt=0;

    while(1){
        init=check();
//        cout<<init<<" ";
        if(init==0) break;
        x=init;
        v.push_back(x);

        visit[init]=0;
pos=-999;
        while(pos!=init){
            pos=a[x];
            v.push_back(pos);
            visit[pos]=0;
            x=pos;
        }
        v.push_back(9999);
        cnt++;
    }

    cout<<cnt<<endl;
    vector <int> :: iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
          {
              if( (*itr)==9999) cout<<endl;
              else cout<<(*itr)<<" ";
          }

 

    return 0;
}
    
