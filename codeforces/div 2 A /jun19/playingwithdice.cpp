#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a,b,cnta,cntb,x,i,dr;

    cnta=cntb=dr=0;

    cin>>a>>b;
    for(i=1;i<=6;i++)
        if( abs(a-i)==abs(b-i)) dr++;
        else if( abs(a-i)<abs(b-i))  cnta++;
        else cntb++;

        cout<<cnta<<" "<<dr<<" "<<cntb<<endl;
        return 0;
    }
