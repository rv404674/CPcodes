//update between range-lazy propagation
//range sum query

#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector <long long int> seg;
vector <long long int> a;
vector <long long int> lazy;

void buildsegmenttree(long long int l,long long int h,long long int pos){
if(l==h)
{seg[pos]=a[l];
    return ;
}
long long int mid=(l+h)/2;
buildsegmenttree(l,mid,2*pos+1);
buildsegmenttree(mid+1,h,2*pos+2);
seg[pos]=seg[2*pos+1]+seg[2*pos+2];
}

long long int findsum(long long int l,long long int h,long long ql,long long qh,long long int pos){
    if(l>h || ql>h || qh<l)
        return 0;

  if(lazy[pos]!=0)
  {seg[pos]+=lazy[pos]*(h-l+1);
      if(l!=h){
          lazy[2*pos+1]+=lazy[pos];
          lazy[2*pos+2]+=lazy[pos];
      }
      lazy[pos]=0;
  }
      
    if(ql<=l && qh>=h)
    return seg[pos];

    long long int mid=(l+h)/2;
return ( findsum(l,mid,ql,qh,2*pos+1)+findsum(mid+1,h,ql,qh,2*pos+2) );
}

void updatebetweenrange(long long int l,long long int h,long long int ql,long long int qh,long long int v,long long int pos){
if(lazy[pos]!=0){
seg[pos]+=lazy[pos]*(h-l+1);//understand this, why (h-l+1) is multiplied
if(l!=h){
    lazy[2*pos+1]+=lazy[pos];
    lazy[2*pos+2]+=lazy[pos];
    }
lazy[pos]=0;
}

if(l>h || ql>h ||qh<l)
    return ;


if(ql<=l && qh>=h)
{seg[pos]+=v*(h-l+1);
    if(l!=h){
        lazy[2*pos+1]+=v;
        lazy[2*pos+2]+=v;
    }
    return ;
}

long long int mid=(l+h)/2;
updatebetweenrange(l,mid,ql,qh,v,2*pos+1);
updatebetweenrange(mid+1,h,ql,qh,v,2*pos+2);

seg[pos]=seg[2*pos+1]+seg[2*pos+2];
}



int main(){
    ios_base::sync_with_stdio(false);
    long long int n,q,c,l,h,ql,qr,t,i,m,r,v;

    cin>>t;
    while(t--){
        cin>>n>>m;

       a=vector<long long int> (n,0);
       q=ceil(log2(n));
       q=2*(long long int)pow(2,q)-1;
       seg= vector<long long int> (q);
       lazy=vector<long long int> (q,0);

       buildsegmenttree(0,n-1,0);
        while(m--){
        cin>>c;
        if(c){//sum between range
          cin>>ql>>qr;
          cout<<findsum(0,n-1,ql-1,qr-1,0)<<endl;// 0 based indexing
        }
        else{
            cin>>l>>r>>v;
            updatebetweenrange(0,n-1,l-1,r-1,v,0);
        }
            }
        seg.clear();
        lazy.clear();
         a.clear();
    }

    return 0;
}


