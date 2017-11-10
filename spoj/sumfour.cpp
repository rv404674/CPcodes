//very good question
//see spoj toolki test 14
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

     int count,i,j,n,k,val;

    count=0;
   cin>>n;
int a[n],b[n],c[n],d[n];

   for(i=0;i<n;i++)
        cin>>a[i]>>b[i]>>c[i]>>d[i];

    vector <int> v;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        v.push_back(a[i]+b[j]);
   
    sort(v.begin(),v.end());

   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   {
       val=-(c[i]+d[j]);
      count+=upper_bound(v.begin(),v.end(),val)-lower_bound(v.begin(),v.end(),val);} 

            cout<<count<<endl;
            return 0;
            }

