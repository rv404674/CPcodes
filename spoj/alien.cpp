#include<iostream>
using namespace std;

typedef long long lli;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli n,bt,sum,cnt,finalsum,t,i,start,mxcnt;
   
        cin>>t;
        while(t--){
            cin>>n>>bt;
            lli a[n];
            for( i=0;i<n;i++) cin>>a[i];
            sum=cnt=0;
            mxcnt=finalsum=-9999999;
            start=0;

            for(i=0;i<n;i++){
                sum+=a[i];
                    cnt++;
             if(mxcnt<cnt && sum<=bt){
                 finalsum=sum;
          mxcnt=cnt;
             }

      while(sum>bt){
   sum-=a[start++];
   cnt--;}

   if(mxcnt==cnt && sum<finalsum)
    finalsum=sum;
            }
         cout<<finalsum<<" "<<mxcnt<<endl;
        }
      return 0;
}  
