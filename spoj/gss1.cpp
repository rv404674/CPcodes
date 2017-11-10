// very good question on segment trees
// http://tiny-code.blogspot.in/2013/07/spoj-1043can-you-answer-these-queries-i.html

#include<bits/stdc++.h>
using namespace std;

struct node{
    int sum, leftsum;
    int rightsum, bestsum;
};


int a[50020];
node seg[4*50020];

void buildseg(int l,int h,int pos){
    if(l==h){
        seg[pos].sum=a[l];
        seg[pos].leftsum=a[l];
        seg[pos].rightsum=a[l];
        seg[pos].bestsum=a[l];
    return ;
    }
    int mid=(l+h)/2;
    buildseg(l,mid,2*pos+1);
    buildseg(mid+1,h,2*pos+2);

    seg[pos].sum=seg[2*pos+1].sum+seg[2*pos+2].sum;
   
    seg[pos].leftsum=max(seg[2*pos+1].leftsum,seg[2*pos+1].sum+seg[2*pos+2].leftsum);

    seg[pos].rightsum=max(seg[2*pos+1].rightsum+seg[2*pos+2].sum,seg[2*pos+2].rightsum);

    seg[pos].bestsum=max(seg[2*pos+1].bestsum,max(seg[2*pos+2].bestsum,seg[2*pos+1].rightsum+seg[2*pos+2].leftsum) );
}

node queryseg(int l,int h,int ql,int qh,int pos){
    node result;
   result.leftsum=result.rightsum=result.sum=result.bestsum=INT_MIN;

    if(ql<=l && qh>=h)
        return seg[pos];
    if(ql>h || qh<l)
        return result;

    int mid=(l+h)/2;

    if(ql>mid)
        return queryseg(mid+1,h,ql,qh,2*pos+2);
     if(qh<=mid)
        return queryseg(l,mid,ql,qh,2*pos+1);


    node left=queryseg(l,mid,ql,qh,2*pos+1);
    node right=queryseg(mid+1,h,ql,qh,2*pos+2);

    result.sum=left.sum+right.sum;
    result.leftsum=max(left.leftsum,right.leftsum+left.sum);
    result.rightsum=max(left.rightsum+right.sum,right.rightsum);
    result.bestsum=max(left.bestsum,max(right.bestsum,left.rightsum+right.leftsum));
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int m,ql,qh,n,pos;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;

    buildseg(0,n-1,0);

    while(m--){
        cin>>ql>>qh;
        cout<<queryseg(0,n-1,ql-1,qh-1,0).bestsum<<endl;
    }
    return 0;
}
