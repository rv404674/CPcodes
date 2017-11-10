#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x,y,ans=100001;
	int n,ans1,ans2;
	cin >> x >> y >> n;
	for(int i=1;i<=n;i++){
		double a=i*(x/y);

                cout<<"i a "<<i<<" "<<a<<endl;
		a=floor(a+0.49999999);
                cout<<a<<endl;

		double hoge=abs(x/y-a/i);
                cout<<"hoge "<<hoge<<endl;

		if(ans>hoge){
			ans1=a;
			ans2=i;
			ans=hoge;
                        
		cout<<"ans1 ans2 ans"<<ans1<<" "<<ans2<<" "<<ans<<endl<<endl<<endl;
                }
	}
	cout << ans1 << "/" << ans2;
	return 0;
}
