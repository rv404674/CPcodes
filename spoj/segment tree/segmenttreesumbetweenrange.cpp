//find sum between a range 
//also update a given element

#include<iostream>
#include<cmath>
using namespace std;

void buildseg(int *a,int *seg,int l,int h,int pos){

    if(l==h) 
{//for leaf nodes
    seg[pos]=a[l];
    return ;
}
    int mid=(l+h)/2;
    buildseg(a,seg,l,mid,2*pos+1);
    buildseg(a,seg,mid+1,h,2*pos+2);

    seg[pos]=seg[2*pos+1]+seg[2*pos+2];

}

int sum(int *a,int *seg,int l,int h,int ql,int qh,int pos){
if(ql<=l && qh>=h)//see your notes for clear explanation
    return seg[pos];
else if(ql>h || qh<l)
    return 0;//for min query using segment tree we return max value

int mid=(l+h)/2;
return( sum(a,seg,l,mid,ql,qh,2*pos+1)+sum(a,seg,mid+1,h,ql,qh,2*pos+2));
}


void updatesegutil(int *seg,int l,int h,int i,int diff,int pos){
if(l>h || i<l || i>h)
    return ;
if(l==h){
    seg[pos]=seg[pos]+diff;
    return ;}
int mid=(l+h)/2;
updatesegutil(seg,l,mid,i,diff,2*pos+1);
updatesegutil(seg,mid+1,h,i,diff,2*pos+2);

seg[pos]=seg[2*pos+1]+seg[2*pos+2];
}


void updateseg(int *a,int *seg,int l,int h,int i,int val){
    int diff=val-a[i];
    a[i]=val;//optional ,we dont need to update contents of array

    updatesegutil(seg,l,h,i,diff,0);
}

int main(){
    ios_base::sync_with_stdio(false);
    int n,x,val,m,l,r,i,size;
    
    //x for 0,1  0 for update and 1 for sum between a range
    
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cin>>m;
    
    x=ceil(log2(n));
    size=2*(int)pow(2,x)-1;
    int seg[size];
     
    buildseg(a,seg,0,n-1,0);

    while(m--){
      cin>>x;
      if(x){
          //sum operation
          cin>>l>>r;
            cout<<sum(a,seg,0,n-1,l,r,0)<<endl;//(a,seg,l,h,ql,qh,pos);
      }
      else{
          cin>>i>>val;
          updateseg(a,seg,0,n-1,i,val);
      }

    }
return 0;
    }

