#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int j,t,n1,i,n2;
    cin>>t;
    while(t--){
        cin>>n1;
        long long int a[n1];
        for(i=0;i<n1;i++) cin>>a[i];

        cin>>n2;
        long long int b[n2];
        for(i=0;i<n2;i++) cin>>b[i];

        sort(a,a+n1);sort(b,b+n2);

        long long int k,min;
        min=99999999;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                 k=a[i]-b[j];
            k=k>0?k:-k;
            if(k<min) min=k;
        }
        }

        cout<<min<<endl;
    }

    return 0;
}



