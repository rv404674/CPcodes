//try to lool for the pattern
//ans( pow(2,n) +k )=1+2*k;
//now let x= pow(2,n)+k
//finally ans(n)=1+2*(n-pow(2,k));

#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

         string s;
         long long int n,j,i,k;

         while(1){
             cin>>s;
             if( s[0]=='0' && s[1]=='0')
                 break;
             n=(s[0]-'0')*10+(s[1]-'0');
             n=n*pow(10,(s[3]-'0'));

            //below given solution is also correct ,but it gives tle
            /*i=1;j=-99;
             while(1){

                if(a[i]==true){
                 if(j==i && k==1)
                     break;
                 k++;j=i;
         ///       cout<<i<<"true"<<endl;
                }
                
                //cout<<k<<endl;
                if(k==2) 
                {//cout<<i<<"false"<<endl;
                    a[i]=false;
                    k=0;}
                //cout<<"i "<<i<<" "<<"n "<<n<<"k "<<k<<endl;
                if(i==n)
                    i=1;
                else
                i++;
             }
             cout<<i<<endl;*/

long long int d=1;
//above formula is implemeted,nothing else
while(d<=n) d=d*2;
j=1+(n-(d/2))*2;
cout<<j<<endl;



         }
         return 0;
}



