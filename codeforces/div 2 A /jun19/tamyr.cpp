#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long int n,m,z;
    cin>>n>>m>>z;

    long int n1,n2,cnt,i;
    n1=n2=cnt=0;

    long int a[10010],b[10010];
    long int x=1;
    while(1){
        if(x*n<=z)
        a[n1++]=x*n;
     else break;
     x++;
    }

    x=1;
    while(1){
     if(x*m<=z)
        b[n2++]=x*m;
     else break;
     x++;
    }

    for(i=0;i<n1;i++)
        if(binary_search(b,b+n2,a[i])) cnt++;
    cout<<cnt<<endl;

    return 0;
}

