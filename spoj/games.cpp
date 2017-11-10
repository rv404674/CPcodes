#include<iostream>
#include<cmath>
#include<sstream>

using namespace std;

long int gcd(long int a,long int b){
        if(a<b)
                    return gcd(b,a);
            if(b==0)
                        return a;
                return gcd(b,a%b);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   long int j;
   long  x,y;

    string s,a;
    long i,t,ans,c;
    cin>>t;

    while(t--){
        cin>>s;
        a="";

        c=0;
     for(i=s.size()-1;i>=0;i--) if(s[i]=='.') break;
     else c++;

  for(j=0;j<s.size();j++) if(s[j]!='.') a=a+s[j];



if(a==s) cout<<1<<endl;
else{
stringstream ss(a);
ss>>x;
y=gcd(x,pow(10,c));
ans=pow(10,c)/y;        
          cout<<ans<<endl;      }   
            
                            }
        
    return 0;
}
