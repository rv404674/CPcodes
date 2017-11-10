
#include<iostream>
#include<iomanip>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<utility>
#include<limits.h>
#include<functional>
#include<algorithm>


using namespace std;

int xx[8]={-1,-1,-1,0,0,1,1,1};
int yy[8]={-1,0,1,-1,1,-1,0,1};
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
lli t,n,m,i,j,flag;
lli sum,k,cnt,cand,mx;
string s;

    cin>>t;
while(t--){
    cin>>n>>m;
    lli reqsal[n],offsal[m],joboff[m],cmp;
cand=sum=flag=cmp=0;

for(i=0;i<n;i++) cin>>reqsal[i];


    for(i=0;i<m;i++) 
        cin>>offsal[i]>>joboff[i];
    lli check[m];
    memset(check,0,sizeof(check));

 vector<string> a;
for(i=0;i<n;i++)
{cin>>s;
   a.push_back(s);
} 

    for(i=0;i<n;i++){
        mx=-999;
        flag=0;
        for(j=0;j<m;j++)
         if( (int)(a[i][j]-'0')==1 )
            if(  reqsal[i]<=offsal[j] && joboff[j]>0 &&offsal[j]>mx){
               mx=offsal[j];
              flag=1;
             k=j;
            }
        
    
       if(flag){
         //  DEBUG(i)
           //    DEBUG(k)
          sum+=mx;
           //DEBUG(sum)
         joboff[k]--;
        check[k]=1;
       cand++;
       }
    }
    

  // for(i=0;i<m;i++)  cout<<check[i]<<endl;

   for(i=0;i<m;i++) if(!check[i]) cmp++;
   cout<<cand<<" "<<sum<<" "<<cmp<<endl;
}
return 0;
}
