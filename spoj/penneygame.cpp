#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    int i,j,t,k,n;
    k=0;
    vector <string> v;
    v.push_back("TTT");
    v.push_back("TTH");
    v.push_back("THT");
    v.push_back("THH");
    v.push_back("HTT");
    v.push_back("HTH");
    v.push_back("HHT");
    v.push_back("HHH");
    string s,sub;
    
    cin>>t;

    while(t--){
        cin>>n;
    cin>>s;


 cout<<n<<" ";
 for(int x=0;x<8;x++){
k=0; 
     sub=v[x];    
    for(i=0;i<s.size();i++){
        for(j=i;j<i+3;){
            if(s[j]==sub[j-i])
                j++;
            else break;
        }
        if(j==(3+i)) k++;}
    
    cout<<k<<" ";
 }
 cout<<endl;

    }
    return 0;
}
