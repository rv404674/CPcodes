#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    char x[105][105];
    int t,r,c,i,j;
     int a,l,i s,z,w,e;

      int b[6];
     cin>>t;

     while(t--){
     a=l=is=z=w=e=0;
         cin>>r>>c;
         for(i=0;i<r;i++)
             for(j=0;j<c;j++)
             {  cin>>x[i][j];
                 if(x[i][j]=='A') a++;
                 else if(x[i][j]=='L') l++;
                 else if(x[i][j]=='I') is++;
                 else if(x[i][j]=='Z') z++;
                 else if(x[i][j]=='W') w++;
                 else if(x[i][j]=='E') e++;
             }

  if(a>=1 && l>=4 && is>=1 && z>=2 && w>=1 && e>=1)
  cout<<"YES\n";
  else cout<<"NO\n";

     }
     return 0;
}



