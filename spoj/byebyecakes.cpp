#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int e,f,s,m,ed,fd,sd,md,e1,f1,s1,m1;
    int em,fm,sm,mm;

    while(1){
        cin>>e>>f>>s>>m>>ed>>fd>>sd>>md;
        if(e==-1)
            break;

       e1=ceil( (float)e/(float)ed);
       f1=ceil( (float)f/(float)fd);
       s1=ceil( (float)s/(float) sd);
       m1=ceil( (float)m/(float)md);

       int k=max(e1,max(f1,max(s1,m1)));
         cout<<(k*ed)-e<<" "<<(k*fd)-f<<" "<<(k*sd)-s<<" "<<(k*md)-m<<endl;
    }
    return 0;
}

