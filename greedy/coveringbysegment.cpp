#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,i,a,b;

    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++) cin>>v[i];
            sort(v.begin(),v.end());

           int l,r,seg=0;
           i=0;

          while(i<n){
             l=v[i];
            r=l+1;
           // cout<<l<<" "<<r<<endl;
            i+=1;
           while(i<n && v[i]<=r)
              i+=1;
           //cout<<i<<endl;
          seg++;
          }
          
          cout<<seg<<endl;
         return 0;
} 

        
