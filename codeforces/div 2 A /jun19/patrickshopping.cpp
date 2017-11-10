#include<iostream>
typedef long li;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    li d1,d2,d3;
    cin>>d1>>d2>>d3;

    cout<<min( min(2*(d1+d2*1LL),d1*1LL+d2+d3),min(2*(d2*1LL+d3),2*(d1*1LL+d3) ) )<<endl;
    return 0;
}

