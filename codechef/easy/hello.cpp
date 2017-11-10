#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    float a1,b2,cost1,cost2;
    int a2,b1,n,c2;

    cin>>t;
    int cnt;
    while(t--){
        cin>>a1>>b1>>n;
 cnt=0;

            cost1=(a1*b1);
        while(n--){
            cin>>a2>>b2>>c2;
            cost2=(c2/a2)+(b2*b1);

            if(cost2<cost1) {cnt++;cost1=cost2;}

        }
        cout<<cnt<<endl;
    }
    return 0;
}

