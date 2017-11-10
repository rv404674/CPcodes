#include<iostream>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int t,i,o,c;
     t=0;
    while(1){
        cin>>s;
        if(s[0]=='-')
            break;
        t++;
        o=c=0;

        for(i=0;i<s.size();i++){
            if(s[i]=='{')
                o++;
            else if(s[i]=='}')
            {if(o==0)
                {c++;o++;}
              else
                    o--;
            }

        }
        cout<<t<<". "<<c+o/2<<endl;
    }
    return 0;
}
