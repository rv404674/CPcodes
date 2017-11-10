#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,pos,neg,i,cnt,t;


        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=neg=cnt=pos=0;i<n;i++)
            if(a[i]<0) 
            {if(neg>0) neg+=a[i];
                else cnt++;
            }

            else neg+=a[i];

        cout<<cnt<<endl;
0
    return 0;
}


