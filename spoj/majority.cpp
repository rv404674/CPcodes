#include<iostream>
#include<map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,t,x;
    long int n;
        map<int,int> m;
        map<int,int>::iterator itr;

    cin>>t;
    while(t--){
        cin>>n;

        for(i=0;i<n;i++) 
        {cin>>x;m[x]++;}

        for(itr=m.begin();itr!=m.end();itr++)
            if((*itr).second > n/2)
            {cout<<"YES "<<(*itr).first<<endl;break;}

            if(itr==m.end())
                cout<<"NO\n";
    m.clear();    
    }
    return 0;
    
}

        

