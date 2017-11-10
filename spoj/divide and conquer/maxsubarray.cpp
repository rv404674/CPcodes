//see cormen divide and conquer
#include<iostream>
using namespace std;

//(0,n-1)
int maxcross(int *a,int l,int h,int mid){
    int i,lsum,rsum,sum;
    lsum=rsum=-9999;
        sum=0;

    
    for(i=mid;i>=l;i--){
        sum+=a[i];
        if(sum>lsum)
            lsum=sum;
    }
    
    for(sum=0,i=mid+1;i<=h;i++){
        sum+=a[i];
        if(sum>rsum)
            rsum=sum;
    }
    return rsum+lsum;
}

int maxsum(int *a,int l,int h){
    if(l==h)//base case
        return a[l];
    else{
        int mid=(l+h)/2;
        //solve recursively
        int lsum=maxsum(a,l,mid);
        int rsum=maxsum(a,mid+1,h);
        int crossum=maxcross(a,l,h,mid);
        return max(lsum,max(rsum,crossum));
    }
}


int main(){
    ios_base::sync_with_stdio(false);

    int n,*a;
    cin>>n;
    a=new int [n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"max sum of a subarray is"<<maxsum(a,0,n-1)<<endl;
    return 0;
}



