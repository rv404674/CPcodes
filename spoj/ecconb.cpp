#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long int n,t,sum,i,a[100],l,k;
    
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0)
        {
        k=0;
        while(n){
            a[k++]=n%2;
            n/=2;
        }
        sum=0;
        l=k-1;
        for(i=0;i<k;i++)
            sum+=a[i]*pow(2,l--);
     cout<<sum<<endl;        
        }
        else cout<<n<<endl;
    }
    return 0;
}
