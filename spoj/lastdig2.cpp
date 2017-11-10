#include<cmath>
#include<iostream>
using namespace std;

int cycle[10]={0,1,4,4,2,1,1,4,4,2};

int main()
{ ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t;
	cin>>t;
        while(t--)
	{
		string a;
		cin>>a;
		int d=a[a.length()-1]-'0';
		long long b;
                cin>>b;
		if(b==0)
		   cout<<1<<endl;
                else 	if(d<2 || d==5 || d==6)
			cout<<d<<endl;
                else {
		int mod=b%cycle[d];
		if(mod)
			cout<<(int)(pow(d,mod))%10<<endl;//power returns a double value ,so type cast it into int
		else
			cout<<(int)(pow(d,cycle[d]))%10<<endl;//take ex for 7 than for 8
              }
                }
	return 0;
}
