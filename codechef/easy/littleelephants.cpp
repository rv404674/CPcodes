#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,n,a[110],i,j,nl,nt;
    cin>>t;

    while(t--){
        cin>>n;
        for(i=nl=nt=0;i<n;i++) cin>>a[i];

        for(i=0;i<n-1;i++) if(a[i]>a[i+1]) nl++;
      for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
          if(a[i]>a[j]) nt++;


    if(nl==nt) cout<<"YES\n";
    else cout<<"NO\n";
    }
  return 0;
}  
