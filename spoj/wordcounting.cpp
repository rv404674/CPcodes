#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,n,j,t,prelen,len,best,wrdcnt;
    string s,a;

    cin>>t;

    cin.ignore();

    while(t--){
        getline(cin,a);
        stringstream ss(a);
    best=-1;
prelen=len=wrdcnt=0;

        while(ss>>s){
            len=s.size();
            if(len==prelen) wrdcnt++;
            else{
                if(wrdcnt>best) best=wrdcnt;
                wrdcnt=1;
                prelen=len;
            }
        }
    if(wrdcnt>best) best=wrdcnt;
    cout<<best<<endl;
    }
    return 0;
}




