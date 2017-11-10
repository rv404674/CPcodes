#include<iostream>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long sum,i,t,max1,mx,mxcnt,n,cnt,x;
    cin>>t;
    while(t--){
        cin>>n>>mx;

        long int a[n];
        for(i=0;i<n;i++) cin>>a[i];

        sum=0;max1=mxcnt=-99;cnt=0;i=0;x=0;
        
        while(1){
            while(i<n && sum+a[i]<=mx){
           
                sum+=a[i++];cnt++;
               // cout<<sum<<endl;
            }

            if(sum>max1) max1=sum;
            if(cnt>mxcnt) mxcnt=cnt;
//cout<<max1<<endl;
            if(i>=n) break;
            sum-=a[x++];
            cnt--;

            if(sum==0) break;
        }
        cout<<max1<<" "<<mxcnt<<endl;
    }
    return 0;
}

     

