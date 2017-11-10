//building a segment tree and range min query
#include<iostream>
#include<cmath>
using namespace std;
long long int mx=10000000000000;

void buildsegmenttree(int *a,int *seg,int l,int h,int pos){
if(l==h){
    seg[pos]=a[l];
    return;
}
int mid=(l+h)/2;
buildsegmenttree(a,seg,l,mid,2*pos+1);
buildsegmenttree(a,seg,mid+1,h,2*pos+2);

seg[pos]=min(seg[2*pos+1],seg[2*pos+2]);
}

long long int rmq(int *seg,int ql,int qh,int l,int h,int pos){
    if(ql<=l && qh>=h)
        return seg[pos];
    if(ql>h || qh<l)
        return mx;
    int mid=(l+h)/2;

    return min( rmq(seg,ql,qh,l,mid,2*pos+1),rmq(seg,ql,qh,mid+1,h,2*pos+2));
}

int main(){
    ios_base::sync_with_stdio(false);
    int i,q,n,r,min;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++) cin>>a[i];

    int l=(int)ceil(log2(n));
    int x=2*(int)pow(2,l)-1;
cout<<x<<endl;

  int seg[x];

    buildsegmenttree(a,seg,0,n-1,0);//(s,seg,low,high,0);

    for(i=0;i<x;i++) cout<<seg[i]<<" ";
    cout<<endl;

    cin>>q;
    while(q--){
        //l and r assumes 0 indexing
        cin>>l>>r;
        cout<<rmq(seg,l,r,0,n-1,0)<<endl;
    }
    return 0;
}


