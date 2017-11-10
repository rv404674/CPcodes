#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    m["rahul"]=5;
    m["verma"]=6;
    m["acmicpc"]=7;

    for(auto itr=m.begin();itr!=m.end();itr++) 
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    return 0;
}
