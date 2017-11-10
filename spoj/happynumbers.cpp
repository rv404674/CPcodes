#include<iostream>
#include<set>

using namespace std;
int main(){
    int n,sum,k;
    set <int> s;
    int c=0;
    cin>>n;
   
    while(1){
        sum=0;
        c++;
        while(n){
            k=n%10;
           sum+=k*k;
           n/=10;}
      
        n=sum;
    //   cout<<sum<<endl;
        
       if(sum==1){
            cout<<c<<endl;
            break;}
        else {
            if( !(s.empty()) && s.count(sum))
            {cout<<"-1"<<endl;break;}
            else 
                s.insert(sum);
        }

    }
    return 0;
}

