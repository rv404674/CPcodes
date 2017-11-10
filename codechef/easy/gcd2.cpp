#include<iostream>
#include<string>

using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

ll reduce(ll a,string s){
    ll mod=0;
    for(ll i=0;i<s.size();i++)
        mod=(mod*10+s[i]-'0')%a;
    return mod;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t,a,b;
    string s;

    cin>>t;
    while(t--){
        cin>>a>>s;
        if(a==0) cout<<s<<endl;
        else{
        b=reduce(a,s);
        cout<<gcd(a,b)<<endl;
        }
    }
    return 0;
}

