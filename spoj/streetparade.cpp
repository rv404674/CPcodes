#include<iostream>
#include<vector>
#include<stack>
#include<iterator>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int t,i,n,k,x,y,itr;
    stack <int> s;
    bool state;
    int v[1001];
     //vector<int>::iterator itr=v.end();

//v.erase() returns next valid iterator.
 while(1){
      k=1;
      state=true;
     cin>>n;

     if(n==0) break;
     for(i=0;i<n;i++) cin>>v[i];

cout<<"hello";
         for(i=0;i<n;i++){

             while(!s.empty() && k==s.top()){
                 k++;
                 s.pop();}

             if(v[i]==k)
                 k++;

             else if(v[i]>s.top() && !s.empty() ){
                 state=false;
                 break;
             }
             else s.push(v[i]);
         }


 if(state) cout<<"yes\n";
 else  cout<<"no\n";

         s.empty();
 }

 return 0;
}
