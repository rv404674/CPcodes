#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    map<string,int> m;
    string s;
    map <string, int> :: iterator it;
    int i,t,n;
    cin>>t;

    while(t--){
        cin>>n;
        while(n--){
            getline(cin,s);
            while(s.size()==0)//to check if getline take '\n' as a string
                getline(cin,s);
            m[s]++;
        }

        for(it=m.begin();it!=m.end();it++){
            cout<<(*it).first<<" "<<(*it).second<<endl;}//or it->first
        cout<<"\n";
        m.clear();
    }

    return 0;
}


