#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, k, p=0, a, min=1000000;
	cin>>n>>k;
	for (int i=0; i<n; i++)
	{
		cin>>a;
		if (abs(a)<min) min=abs(a); 
		if (k>0&&a<0) p-=a, k--;
		else p+=a;
	}
	if(k&1) p-=2*min;
	cout<<p;
	return 0;
}
 