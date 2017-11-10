#include<iostream>
using namespace std;

int binsearch(int *b,int l,int h,int k){
if(l>h)
 return -1;
else{
int mid=(h+l)/2;
if(b[mid]==k) return mid;
else if(b[mid]>k) return binsearch(b,l,mid-1,k);
else return binsearch(b,mid+1,h,k);
}
}

int main()
{
ios_base::sync_with_stdio(false);

	int n1,n2,i,sum,itsum,ind,t1,t2;
	while(1){
		sum=itsum=0;t1=t2=-1;
		cin>>n1;
		if(!n1)
			break;
	int a1[n1],intr1[n1],intr2[n1];
	for(i=0;i<n1;i++) cin>>a1[i];

	cin>>n2;
	int a2[n2],stat[n2];
	for(i=0;i<n2;i++)
	{
		cin>>a2[i];
		stat[i]=0;
	}
	for(i=0;i<n1;i++)
	{
		ind=binsearch(a2,0,n2-1,a1[i]);
		if(ind>=0)
		{
			stat[ind]=1;
			itsum+=a1[i];
			intr1[++t1]=sum;
			sum=0;
		}
		else
			sum+=a1[i];
	}
	intr1[++t1]=sum;sum=0;
	for(i=0;i<n2;i++)
	{
		if(stat[i])
		{
			intr2[++t2]=sum;
			sum=0;
		}
		else
			sum+=a2[i];
	}
	intr2[++t2]=sum;
	sum=itsum;
	for(i=0;i<=t1;i++)
		sum+=max(intr1[i],intr2[i]);
	cout<<sum<<endl;
}
	return 0;
}
