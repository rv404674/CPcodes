#include<iostream>
using namespace std;

int main(){
    int n,i,maxsofar,maxendinghere;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];

    maxsofar=maxendinghere=0;
    
    for(i=0;i<n;i++){
      
        maxendinghere+=a[i];
      if(maxendinghere<0)
          maxendinghere=0;
      else if(maxendinghere>maxsofar)
          maxsofar=maxendinghere;
    }
    cout<<maxsofar<<endl;
    return 0;
}

