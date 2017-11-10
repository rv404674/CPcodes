#include<iostream>
#include<stack>
using namespace std;

long long int maxareahisto(long long int *a,long long int n){
long long int mx,mxarea,i,sttop;
stack <long long int> s;
mxarea=i=0;

while(i<n){
    if(s.empty() || a[s.top()]<=a[i])
        s.push(i++);
    else{
             sttop=s.top();
      s.pop();

      mx=a[sttop] * (s.empty()?i:i-s.top()-1);
      if(mx>mxarea)
          mxarea=mx;
    }
}

while(!s.empty()){
sttop=s.top();
s.pop();
mx=a[sttop]*(s.empty()?i:i-s.top()-1);
if(mx>mxarea) mxarea=mx;
}
return mxarea;
}



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long  int n,i;
    while(1){
    cin>>n;
    if(n==0) break;
    
    long long int a[n];
  

    for(i=0;i<n;i++) cin>>a[i];
    cout<<maxareahisto(a,n)<<endl;
    }

    return 0;
}

