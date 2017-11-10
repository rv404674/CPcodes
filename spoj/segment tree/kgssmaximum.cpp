//use your own brain
///it is too bad to not use it
#include<iostream>
#include<math.h>
#include<limits.h>

using namespace std;
typedef long long lli;

struct node{
    lli first,second;};

    node seg[3*100005];
    lli a[100005];

void buildseg(lli l,lli h,lli pos){
    if(l==h){
        seg[pos].first=a[l];
        seg[pos].second=-1;
     return ;
    }
    lli mid=(l+h)/2;
    buildseg(l,mid,2*pos+1);
    buildseg(mid+1,h,2*pos+2);

    seg[pos].first=max(seg[2*pos+1].first,seg[2*pos+2].first);
if(seg[pos].first==seg[2*pos+1].first)
    seg[pos].second=max(seg[2*pos+1].second,seg[2*pos+2].first);
    else
        seg[pos].second=max(seg[2*pos+1].first,seg[2*pos+2].second);
}


node queryseg(lli l,lli h,lli ql,lli qh,lli pos){
    node result,result1,result2;
    result.first=result.second=-1;

    if(l>h ||ql>h ||qh<l)
        return result;
    if(ql<=l && qh>=h)
        return seg[pos];

    lli mid=(l+h)/2;

result1= queryseg(l,mid,ql,qh,2*pos+1);
 result2=queryseg(mid+1,h,ql,qh,2*pos+2);

    result.first=max(result1.first,result2.first);
   if(result.first==result1.first)
    result.second=max(result1.second,result2.first);
    else
        result.second=max(result1.first,result2.second);

 return result;
}

void updateseg(lli l,lli h,lli i,lli x,lli pos){
    if(l>h || i>h || i<l)
        return ;

    if(l==h)
    {seg[pos].first=a[l]+x;return ;}
    
    lli mid=(l+h)/2;
    updateseg(l,mid,i,x,2*pos+1);
    updateseg(mid+1,h,i,x,2*pos+2);

 seg[pos].first=max(seg[2*pos+1].first,seg[2*pos+2].first);
if(seg[pos].first==seg[2*pos+1].first)
    seg[pos].second=max(seg[2*pos+1].second,seg[2*pos+2].first);
    else
        seg[pos].second=max(seg[2*pos+1].first,seg[2*pos+2].second);

     }


    int main(){
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        
        lli q,n,x,y,i,val;
        char c;
        node l;
        cin>>n;
        for(i=0;i<n;i++) cin>>a[i];
        cin>>q;

        buildseg(0,n-1,0);
        while(q--){
            cin>>c>>x>>y;
            if(c=='U'){
                val=y-a[x-1];
                updateseg(0,n-1,x-1,val,0);//i is the position and x is the new updated value
            }
        else{
            l=queryseg(0,n-1,x-1,y-1,0);
            cout<<l.first+l.second<<endl;}
        }

        return 0;
    }

