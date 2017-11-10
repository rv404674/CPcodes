#include<iostream>
#include<set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,a[200][200],b[200],k,k2,i,j,l;
    set<int> s;

    cin>>n;

    for(i=k=0;i<n;i++){
        cin>>a[i][0];
        cin>>b[k++];
        for(j=1;j<=b[k-1];j++)
            cin>>a[i][j];
    }

    k2=0;
    for(i=0;i<n;i++){
        
        for(j=1;j<=b[k2];j++){
            for(l=0;l<n;)
            {if(a[l][0]!=a[i][j])
                    l++;
                    else break;}
            if(l==n)
            s.insert(a[i][j]);
            }
       k2++;
       }

       cout<<s.size();
       return 0;
       }
