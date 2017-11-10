#include<iostream>
#include<utility>
#include<vector>

using namespace std;

typedef pair<int,int> pii;
int xx[8]={-1,-1,-1,1,1,1,0,0};
int yy[8]={-1,0,1,-1,0,1,-1,1};


pii getpair(int i){
   switch(i){
       case 0:return make_pair(3,1);
       case 1:return make_pair(0,0);
       case 2:return make_pair(0,1);
       case 3:return make_pair(0,2);
       case 4:return make_pair(1,0);
       case 5:return make_pair(1,1);
       case 6:return make_pair(1,2);
       case 7:return make_pair(2,0);
       case 8:return make_pair(2,1);
       case 9:return make_pair(2,2);
   }
}   

bool isvalid(int x,int y){
    if(x>=0 && x<=2 && y>=0 && y<=2) return true;
    if(x==3 && y==1) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        string s;int l,i,j,t;

        cin>>t;
        while(t--){
            cin>>l>>s;

            vector< pair<int,int> > v;

     for(i=0;i<l;i++)
  {  cout<<getpair(s[i]-'0').first<<" "<<getpair(s[i]-'0').second<<endl;
      v.push_back(getpair(s[i]-'0'));cout<<v[i].first<<" "<<v[i].second<<endl;}

                for(i=0;i<8;i++){
                    for(j=0;j<l;){
                        if(isvalid(xx[i]+v[j].first,yy[i]+v[j].second))
                            j++;
                        else break;
                    }
                    if(j==l) break;
                }

                if(i==8) cout<<"NO\n";
                else cout<<"YES\n";
                v.clear();
        }
        return 0;
}


