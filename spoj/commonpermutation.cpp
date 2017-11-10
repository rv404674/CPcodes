#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s1,s2,s;
    bool check[1009];
    
    while(cin>>s1>>s2){
    memset(check,false,sizeof(check));
     
    //consider the and street as test case
       for(int i=0;i<s1.size();i++)
       for(int j=0;j<s2.size();j++)
       {
       if(s1[i]==s2[j] && check[j]==false)
       {    s.push_back(s2[j]);
            check[j]=true;
            break;
            }
                }
       sort(s.begin(),s.end());
       cout<<s<<endl;
       s.clear();
    }
    return 0;
}

    
