#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,x,t,k;
    cin>>n>>k;
  int a[n];
  int max=-9999;
  for(int i=0;i<n;i++) {cin>>a[i];if(a[i]>=max) {max=a[i],k=i+1;}}
  cout<<k;
  return 0;
}

