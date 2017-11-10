//here limitation is that value of b is 10^250
#include<iostream>
#include<string>

int gcd(int a,int b){
    if(b==0)
        return a;
    else 
        return gcd(b,a%b);
}

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string b;
    int t,a,num,i,n;

    cin>>t;
    while(t--){
        cin>>a>>b;
        n=b.size();
        
        if(a==0)
            cout<<b<<endl;
        else
        {
            for(i=num=0;i<n;i++)
                num=(num*10+(b[i]-'0'))%a;
        cout<<gcd(a,num)<<endl;
        }
    }
    return 0;
}


