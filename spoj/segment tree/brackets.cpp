//very good quality question
//understand it logically by making a dry run
//open means number of brackets that have been open but closed 

#include<iostream>
#include<string>

using namespace std;

struct node{
    int open;int close;
};


int size=30009;
node seg[4*30009];
char arr[30009];

void buildseg(int l,int h,int pos){
if(l==h){
    if(arr[l]==')')
    {seg[pos].open=0;seg[pos].close=1;}
    else 
    {seg[pos].open=1;seg[pos].close=0;}
}
else{
int mid=(l+h)/2;
buildseg(l,mid,2*pos+1);
buildseg(mid+1,h,2*pos+2);

int change=min(seg[2*pos+1].open,seg[2*pos+2].close);
seg[pos].open=seg[2*pos+1].open+seg[2*pos+2].open-change;
seg[pos].close=seg[2*pos+1].close+seg[2*pos+2].close-change;
}

}

void updateseg(int l,int h,int index,int pos,char ch){
    if(l==h){
        if(ch==')')
        {seg[pos].open=0;seg[pos].close=1;}
        else {seg[pos].open=1;seg[pos].close=0;}
    }
    else{
        int mid=(l+h)/2;
        if(index<=mid)
            updateseg(l,mid,index,2*pos+1,ch);
        else updateseg(mid+1,h,index,2*pos+2,ch);

        int change=min(seg[2*pos+1].open,seg[2*pos+2].close);
        seg[pos].open=seg[2*pos+1].open+seg[2*pos+2].open-change;
        seg[pos].close=seg[2*pos+1].close+seg[2*pos+2].close-change;
    }
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i,t,m,x;
  string s;
char ch;

    
    for(t=1;t<=10;t++){
        cout<<"Test "<<t<<":\n";
        cin>>n;
        cin>>arr;

        buildseg(0,n-1,0);
        cin>>m;
        while(m--){
            cin>>x;
            if(!x){
                if(seg[0].open==0 && seg[0].close==0)
                    cout<<"YES\n";
                else cout<<"NO\n";
            }
            else {
                ch=arr[x-1]==')'?'(':')';
                   updateseg(0,n-1,x-1,0,ch);//l,h,index,pos,ch
            }

        }
    }
    return 0;
}
















