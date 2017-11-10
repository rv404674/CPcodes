#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int i,cnt,j,n,m;
   int p;
  string s; 

   for(p=1;p<=10;p++){
       cin>>n>>s;
       cin>>m;
       cout<<"Test "<<p<<":\n";

       while(m--){
             cin>>j;
              cnt=0;

             if(j==0){
                 for(i=0;i<n;i++){
                     if(s[i]=='(') cnt++;
                     else cnt--;
                     if(cnt<0) break;
                 }

                 if(i!=n) cout<<"NO\n";
                 else if(cnt!=0) cout<<"NO\n";
                 else cout<<"YES\n";
             }
             else 
                 s[j-1]=s[j-1]==')'?'(':')';
       }
   }
   return 0;
}
       
