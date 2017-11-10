#include<iostream>
#include<string>
#include<queue>

using namespace std;

void generate(int n){
    string s1,s2;
    queue <string> q;
    q.push("1");

    while(n--){
        s1=q.front();
        cout<<s1<<endl;
        q.pop();

        s2=s1;
        q.push(s1.append("0"));
        
        q.push(s2.append("1"));
        //we didnt used s1 again as it has been modified
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n;
    cin>>n;
    generate(n);
    return 0;
}

