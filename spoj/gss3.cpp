//same as gss1 just add update operation
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


void updateseg(int l,int h,int pos,int i,int val){
   if(l>h || i<l || i>h) return ;
    if(l==h){
        seg[pos].sum=val;
        seg[pos].leftsum=val;
        seg[pos].rightsum=val;
        seg[pos].bestsum=val;
    return ;
    }
    int mid=(l+h)/2;

    updateseg(l,mid,2*pos+1,i,val);
    updateseg(mid+1,h,2*pos+2,i,val);
    seg[pos].sum=seg[2*pos+1].sum+seg[2*pos+2].sum;
   
    seg[pos].leftsum=max(seg[2*pos+1].leftsum,seg[2*pos+1].sum+seg[2*pos+2].leftsum);

    seg[pos].rightsum=max(seg[2*pos+1].rightsum+seg[2*pos+2].sum,seg[2*pos+2].rightsum);

    seg[pos].bestsum=max(seg[2*pos+1].bestsum,max(seg[2*pos+2].bestsum,seg[2*pos+1].rightsum+seg[2*pos+2].leftsum) );
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int m,ql,c,qh,n,pos,i,val,x;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;

    buildseg(0,n-1,0);

    while(m--){
        cin>>c;
        if(c==1){
            cin>>ql>>qh;
        cout<<queryseg(0,n-1,ql-1,qh-1,0).bestsum<<endl;
    }
        else if(c==0) 
        {cin>>i>>x;
            updateseg(0,n-1,0,i-1,x);
    }

    }
    return 0;
}
