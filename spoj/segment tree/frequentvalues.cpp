#include<iostream>
using namespace std;

typedef long li;

struct node{
    li total,elem;
};

node segtree[3*100020];
li a[100020];

void buildsegtree(li l,li h,li pos){
    if(l==h){
        segtree[pos].total=1;
        segtree[pos].elem=a[l];
        return ;
    }
    li mid=(l+h)/2;
    buildsegtree(l,mid,2*pos+1);
    buildsegtree(mid+1,h,2*pos+2);

    if(segtree[2*pos+1].elem==segtree[2*pos+2].elem){
        segtree[pos].total=segtree[2*pos+1].total+segtree[2*pos+2].total;
        segtree[pos].elem=segtree[2*pos+1].elem;
    }
    else{
        segtree[pos].total=segtree[2*pos+1].total>segtree[2*pos+2].total?segtree[2*pos+1].total:segtree[2*pos+2].total;
        if(segtree[2*pos].total==segtree[2*pos+1].total)
            segtree[2*pos].elem=segtree[2*pos+1].elem;
        else segtree[2*pos].elem=segtree[2*pos+2].elem;
    }

}

li segquery(li l,li h,li ql,li qh,li pos){
li x,y;

if(ql>h || qh<l || l>h) return 0;
if(ql<=l && qh>=h) return segtree[pos].total;
li mid=(l+h)/2;

x=segquery(l,mid,ql,qh,2*pos+1);
y=segquery(mid+1,h,ql,qh,2*pos+2);

return x+y;
}



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    li q,l,r,n,i,t;

    while(1){

        cin>>n;
       if(n==0) break;
            cin>>q;
        
        for(i=0;i<n;i++)
            cin>>a[i];
      buildsegtree(0,n-1,0);

        while(q--){
            cin>>l>>r;
            cout<<segquery(0,n-1,l-1,r-1,0)<<endl;//(l,h,ql,qh,pos);
    
        }
    }

    return 0;
}
