#include<iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

int count(int x,int y,int c){
int a,b,cnt;
a=b=cnt=0;

while(a!=c && b!=c){//continue till one of the above doesnot become c
if(a==0) a=x;//if a becomes empty fill it back
else if(b==y) b=0;//if b becomes full empty it
else
{
    b=b+a;
    a=0;
    if(b>y){
        a=b-y;
        b=y;
}
        }
cnt++;
}
return cnt;
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a,b,c,t;
    cin>>t;

    while(t--){
        cin>>a>>b>>c;
        if(c>a && c>b) cout<<-1<<endl;
        else if(c==a || c==b) cout<<1<<endl;
        else if(c%gcd(a,b)!=0) cout<<-1<<endl;
        else cout<<min(count(a,b,c),count(b,a,c))<<endl;
    }

    return 0;
}
