//solve using segment tree.can also be solved using queue
#include<iostream>
using namespace std;

long int n=1000000;
int seg[1000000];

void buildseg(long int *a,long int l,long int h,long int pos){
    if(l==h)
    {seg[pos]=a[l];return;}
    
    long int mid=(l+h)/2;
    buildseg(a,l,mid,2*pos+1);
    buildseg(a,mid+1,h,2*pos+2);

    seg[pos]=max(seg[2*pos+1],seg[2*pos+2]);
}

long int rangemaxquery(long int *a,long int l,long int h,long int ql,long qh,long int pos){
    if(l>qh || h<ql)
        return -1;
    if(ql<=l && qh>=h)
        return seg[pos];

    long int mid=(l+h)/2;
    return( max(rangemaxquery(a,l,mid,ql,qh,2*pos+1),rangemaxquery(a,mid+1,h,ql,qh,2*pos+2)) );
            }


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long int i,n,k;
    cin>>n;
    long int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cin>>k;

    buildseg(a,0,n-1,0);
    for(i=0;i<n-k+1;i++)
        cout<<rangemaxquery(a,0,n-1,i,i+k-1,0)<<" ";
    return 0;
}
