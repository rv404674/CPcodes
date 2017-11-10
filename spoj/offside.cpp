#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int a,d,i,j;
        while(1){
            cin>>a>>d;
           // cout<<a<<" "<<d;
            if(a==0 && d==0) break;
             
            int x[a],y[d];
            for(i=0;i<a;i++) cin>>x[i];
            for(i=0;i<d;i++) cin>>y[i];

            sort(x,x+a);
            sort(y,y+d);

        if(x[0]<y[1])
            cout<<"Y\n";
        else cout<<"N\n";
        }
    return 0;
}
