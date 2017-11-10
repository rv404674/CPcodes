#include<iostream>
using namespace std;

typedef long long lli;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli n,m,time,i;

    cin>>n>>m;
    long int a[m];
    for(i=0;i<m;i++) cin>>a[i];
    time=a[0]-1;

   for(i=0;i<m-1;i++){
       if(a[i+1]>=a[i]) time+=(a[i+1]-a[i]);
       else time+=n-(a[i]-a[i+1]);
   }
   cout<<time;
   return 0;
}
