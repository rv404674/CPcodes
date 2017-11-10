#include<iostream>
using namespace std;

int printlcs(int b[1000][],tring x,int m,int n){
if(m==0 ||n==0)
	return 0 ;
if(b[m][n]== -2)
	{printlcs(b,x,m-1,n-1);cout<<x[m];}
else if (b[m][n]== -3)
printlcs(b,x,m-1,n);
else
	printlcs(b,x,m,n-1);
}


 void lcs(string x,string y )
{  
	int i,j,m,n;
	m=x.size();n=y.size();
    int c[n][n],b[m][n];

    for(i=0;i<n;i++) c[i][0]=0;
    	for(i=0;i<m;i++) c[0][i]=0;

   for(i=1;i<=m;i++)
   for(j=1;j<=n;j++){
   	if(x[i-1]==y[j-1]){
     c[i][j]=c[i-1][j-1]+1;
     b[i][j]=-2;
   	}
   else if(c[i-1][j]>+c[i][j-1]){
   	c[i][j]=c[i-1][j];
   	c[i][j]=-3;
   }	
   else c[i][j]=c[i][j-1];

   } 		
   cout<<"largest length is "<<c[m-1][n-1];
   printlcs(b,x,m,n);
}




int main(){
	string  x,y;
	int i,j;

	cin>>x>>y;
	lcs(x,y);
	return 0;
}